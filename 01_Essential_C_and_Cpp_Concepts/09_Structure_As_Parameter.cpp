// Structure As Parameter

#include <iostream>

using namespace std;
struct Rectangle
{
  int length, width;
};
struct Test
{
  int A[5], n;
};

// For call by reference, r1 should be &r1. r1 is the new
// variable created.
int area(struct Rectangle r1)
{
  return r1.length * r1.width;
}

void changeLength(struct Rectangle *r2, int newLen)
{
  r2->length = newLen;
  cout << "New rectangle length: " << newLen << endl;
}

void fun(struct Test t1)
{
  t1.A[0] = 10;
  t1.A[1] = 25;
  cout << "Array inside fun(): ";
  for (int i = 0; i < t1.n; i++)
  cout << t1.A[i] << " ";
  cout << endl;
}

int main()
{
  int x, y;
  cout << "Enter rectangle length: "; cin >> x;
  cout << "Enter rectangle width: "; cin >> y;
  struct Rectangle r = {x, y};
  // area(), call by value
  cout << "Area of rectangle: " << area(r) << endl;
  // changeLength(), call by address
  changeLength(&r, 20);
  // Structure with array, call by value
  struct Test t = {{1, 2, 3, 4, 5}, 5};
  fun(t);
  return 0;
}