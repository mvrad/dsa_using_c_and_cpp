// Pointer To Structure

#include <iostream>

using namespace std;

struct Rectangle
{
  int length, breadth;
};

int main()
{
  struct Rectangle r = {10, 5};
  struct Rectangle *p = &r;
  struct Rectangle *q; q = new Rectangle;
  // The arrow '->' alludes to a pointer pointing to data 'length' in struct Rectangle
  q->length = 15; q->breadth = 10;
  cout << "r length: " << r.length << endl;
  // In C, this syntax is used
  cout << "*p length: " << (*p).length << endl;
  // In C++, this simpler syntax is used
  cout << "*p length: " << p->length << endl;
  // Rectangle q
  cout << "q length: " << q->length << endl;
  cout << "q breadth: " << q->breadth << endl;
  return 0;
}