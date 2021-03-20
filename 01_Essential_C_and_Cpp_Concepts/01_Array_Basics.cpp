/*
 * Array Basics
 * 
 * int A[5]; 
 * 
 * This is called a declaration of an array, you declare that you want to create an empty array
 * that is 5 spaces in length starting at index 0. The array is then stored in the main memory.
 * 
 * int A[5] = {1, 2, 3, 4, 5};
 * 
 * You can also declare an array this way. The left side is called the declaration, the right
 * side is called the initialization.
 * 
 * The for loop is used to access all the elements of an array.
 * 
 * for (int i = 0; i < 5; i++)
 * {
 *   cout << A[i] << endl;
 * }
 * 
 * The above loop prints all elements in the array. i = 0 is the starting point of the loop, i
 * will start at index 0. i < 5 checks if the iterator is less than 5, and if that condition is
 * true then i++ increments the iterator by 1.
 */

// Array practice

#include <iostream>

using namespace std;

int main()
{
  // You can also leave the [] square brackets empty
  int A[12] = {1, 2, 3, 4, 5, 6};
  // Size of the entire array in bytes, 20 bytes
  cout << "Size of array: " << sizeof(A) << " bytes" << endl;
  // Size of a single element in the array in bytes, 4 bytes
  cout << "Size of array element at index 0: " << sizeof(A[0]) << " bytes" << endl;
  // Formula to get length of the array, 10
  cout << "Length of the array: " << sizeof(A)/sizeof(A[0]) << endl;

  int len = sizeof(A)/sizeof(A[0]);

  // For loop
  cout << "For loop: ";
  for (int i = 0; i < len; i++)
  {
    cout << A[i];
  }
  cout << endl;
  // For Each loop
  cout << "For Each loop: ";
  for (int x:A)
  {
    cout << x;
  }
  cout << endl;
  // Basic Input
  int n;
  int B[n];
  cout << "Enter array size: "; cin >> n;
  cout << "Your array size is: " << n << endl;;
  return 0;
}