// Static vs Dynamic Arrays

/*
 * An 'array' is a collection of similar data elements.
 *
 * Scalar variable/A single integer
 * int x = 10;
 *
 * Vector variable/Array with a single dimension
 * int A[5];
 */

#include <iostream>

using namespace std;

void fun(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (i < size - 1)
    {
      cout << arr[i] << ", ";
    } else
    {
      cout << arr[i];
    }
  }
}

int main()
{
  int A[5], n;
  int B[n];
  cout << "Enter array size: "; cin >> n; cout << endl;
  cout << "First array: "; fun(A, 5); cout << endl;
  cout << "Second array: "; fun(B, n); cout << endl;
  // Allocating an array in heap memory using a pointer
  int *P;
  // In C++
  P = new int[5];
  // In C Lang
  // P = (int *)malloc(5 * sizeof(int));
  cout << "Third array: "; fun(P, 5); cout << endl;
  // Removing allocated memory from heap (to avoid memory leak) "Deallocation"
  // In C++
  delete []P;
  // In C Lang
  // free(P);
  return 0;
}