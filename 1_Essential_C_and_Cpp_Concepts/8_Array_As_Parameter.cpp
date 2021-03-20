// Array As Parameter

#include <iostream>

using namespace std;

// [] instead of * here can also work
// int *fun(int n)
// {
//   int *p;
//   p = new int[n];
//   return (p);
// }

// int main()
// {
//   int *A;
//   A = fun(5);
//   cout << A << endl;
//   return 0;
// }

// Note: For Each loop will not work on pointers, you will have to use a For loop
void fun(int A[], int len)
{
  cout << "Array elements inside fun(): ";
  for (int i = 0; i < len; i++)
  cout << A[i] << " ";
  cout << endl;
}

int * fun2(int size)
{
  int *p; p = new int[size];
  for (int i = 0; i < size; i++)
  p[i] = i + 1;
  return p;
}

int main()
{
  int A[] = {2, 4, 6, 8, 10},
    len = sizeof(A)/sizeof(int),
    n = 5,
    *ptr, sz = 8; // fun2() creates the array, *ptr points to what fun2() returns
  // fun();
  fun(A, len);
  cout << "Array elements of fun() inside main(): ";
  for (int x:A)
  cout << x << " "; cout << endl;
  cout << "Array length: " << len << endl;
  // fun2();
  ptr = fun2(sz);
  cout << "Array elements of fun2() inside main(): ";
  for (int i = 0; i < sz; i++)
  cout << ptr[i] << " "; cout << endl;
  return 0;
}