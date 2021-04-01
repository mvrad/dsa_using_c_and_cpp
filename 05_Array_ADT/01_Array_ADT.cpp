// Array ADT

// Arrays can be created 'statically' inside the stack or 'dynamically' in the heap.

#include <iostream>

using namespace std;

int main()
{
  // Declare an array called A of type int and assign to it the following elements
  // and, using static allocation, store it in stack memory.
  int A[10];
  // Create an array called B and dynamically allocate it in heap memory using a
  // pointer.
  int *B = new int[10];
  return 0;
}