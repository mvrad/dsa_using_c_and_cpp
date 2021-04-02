// Array Operations

#include <iostream>

using namespace std;

// Construct the Array
struct Array
{
  int A[10], size, length;
};

// Display the contents of the array
void Display(struct Array arr)
{
  cout << "Array elements: ";
  for (int i = 0; i < arr.length; i++)
    cout << arr.A[i] << " ";
  cout << endl;
}

// Add an element to the end of an array
void Append(struct Array *arr, int x)
{
  // Check the array for free space
  if (arr -> length < arr -> size)
    // Then store the value of x at the end of the array
    arr -> A[arr -> length++] = x;
}

// Insert an element at a given index
void Insert(struct Array *arr, int index, int x)
{
  // Check if the index given is valid or not
  if (index >= 0 && index <= arr -> length)
    // Shift free space for the new element
    for(int i = arr -> length; i > index; i--)
      // Previous element will be copied at this location
      arr -> A[i] = arr -> A[i - 1];
    // Write element
    arr -> A[index] = x;
    // Increment the length of the array because a new element was inserted
    arr -> length++;
}

// Delete an element at the given index
void Delete(struct Array *arr, int index)
{
  int x = 0;
  // Check if the index given is valid or not
  if (index >= 0 && index <= arr -> length)
    // Get the value from the array at the given index
    x = arr -> A[index];
    // Shift all elements
    for (int i = index; i < arr -> length - 1; i++)
      // Copy an element at A[i + 1] to shift all the elements
      arr -> A[i] = arr -> A[i + 1];
    // The array must be decremented
    arr -> length--;
}

// Linear Search
void swap(int *x, int *y)
{
  int temp = *x; *x=*y; *y=temp;
}
int LinearSearch(struct Array *arr, int key)
{
  for (int i = 0; i < arr -> length; i++)
    // Move key element one step forward, "transposition"
    if (key == arr -> A[i])
    {
      // Move key element to front/head
      swap(&arr -> A[i], &arr -> A[0]);
      return i;
    }
  return -1;
}

// Binary Search
int BinarySearch(struct Array arr, int key)
{
  int l = 0, h = arr.length - 1, mid;
  while (l <= h){
    mid = (l+h) / 2;
    if (key == arr.A[mid]) {
      return mid; cout << endl;
    }
    else if (key < arr.A[mid]) {
      h = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  cout << "Unsuccessful" << " ";
  return -1; cout << endl;
}



int main()
{
  struct Array arr1 = {{2, 3, 4, 5, 6}, 5, 5};
  // &arr1 is the address of arr1, append 10 to the end of arr1
  Append(&arr1, 10);
  // Insert 12 at index 0 in arr1
  Insert(&arr1, 0, 12);
  // Delete element at index 2 in arr1
  Delete(&arr1, 2);
  // Display the elements in the array
  Display(arr1);
  // Perform linear search
  cout << "Element of value 12 is at index: " << LinearSearch(&arr1, 12) << endl;
  // Perform binary search
  cout << "Element of value 5 is at index: " << BinarySearch(arr1, 5) << endl;
  return 0;
}