// 2D Arrays

#include <iostream>

using namespace std;

int main()
{
  // Method 1
  int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}};
  // Method 2
  int *B[3]; // Rows
  B[0] = new int[4]; B[1] = new int[4]; B[2] = new int[4]; // Columns
  // Method 3
  int **C = new int*[3]; // Rows
  C[0] = new int[4]; C[1] = new int[4]; C[2] = new int[4]; // Columns

  for (int i = 0; i < 3; i++)
  {
    cout << endl;
    for (int j = 0; j < 4; j++)
    {
      // A, B, or C
      cout << C[i][j] << " ";
    }
  }
  cout << endl;

  // Deallocation
  delete []C;
  return 0;
}