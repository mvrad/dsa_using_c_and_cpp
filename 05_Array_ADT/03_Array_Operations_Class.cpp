// Array Operations Class

#include <iostream>

using namespace std;

class Array
{
  private:
    // Allocate memory in heap using a pointer, *A
    int *A, size, length;
  public:
    Array(int size);
    void Create();
    void Display();
    void Append(int x);
    void Insert(int index, int x);
    void Delete(int index);
    void Swap(int *x, int *y);
    int Linear(int key);
    int Binary(int key);
    int Rbinary(int l, int h, int key);
    ~Array();
};

Array::Array(int size)
{
  // Allocate memory in heap using the "new" keyword/operator
  A = new int[size];
}

void Array::Create()
{
  cout << "Enter length for array: "; cin >> length;
  for (int i = 0; i < length; i++) {
    cout << "Element at index " << i << ": ";
    cin >> A[i];
  }
  cout << "\n";
}

void Array::Display()
{
  for (int i = 0; i < length; i++)
    cout << A[i] << " ";
  cout << "\n";
}

void Array::Append(int x)
{
  A[length] = x;
  length++;
}

void Array::Insert(int index, int x)
{
  if (index >= 0 && index <= length)
    for(int i = length; i > index; i--)
      A[i] = A[i - 1];
    A[index] = x;
    length++;
}

void Array::Delete(int index)
{
  if (index >= 0 && index <= length)
    int x = A[index];
    for (int i = index; i < length - 1; i++)
      A[i] = A[i + 1];
  length--;
}

void Array::Swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int Array::Linear(int key)
{
  for (int i = 0; i < length; i++)
    if (key == A[i])
    {
      Swap(&A[i], &A[0]);
      cout << "Successful At Index: ";
      return i;
    }
  cout << "Unsuccessful" << " ";
  return -1;
}

Array::~Array()
{
  delete []A;
}

int main()
{
  Array arr(100);
  arr.Create();
  cout << "Array: ";
  arr.Display();
  cout << "\n";
  cout << "Append 100: ";
  arr.Append(100);
  arr.Display(); cout << "\n";
  cout << "Insert 100 at Index 2: ";
  arr.Insert(2, 100);
  arr.Display(); cout << "\n";
  cout << "Delete Element At Index 3: ";
  arr.Delete(3);
  arr.Display(); cout << "\n";
  cout << "Linear Search For Element 6: ";
  cout << arr.Linear(6) << "\n"; cout << endl;
}