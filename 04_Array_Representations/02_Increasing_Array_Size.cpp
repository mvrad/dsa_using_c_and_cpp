// Increasing Array Size

/*
 * Changing the size of an array can only be done with an array located in heap
 * memory. You cannot change the size of an array that is allocated in the stack.
 */

#include <iostream>

using namespace std;

int main()
{
  int *p, *q, i;
  p = new int[5]; p[0] = 3; p[1] = 5; p[2] = 7; p[3] = 9; p[4] = 11;
  q = new int[10];

  for (i = 0; i < 5; i++)
    q[i] = p[i];

  delete []p;
  p = q; q = NULL;

  cout << "Elements from array p copied to array q: ";
  for (i = 0; i < 5; i++)
    cout << p[i] << " ";
  cout << endl;
  return 0;
}