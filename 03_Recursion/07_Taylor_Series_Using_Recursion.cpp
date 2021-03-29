// Taylor Series Using Recursion

#include <iostream>

using namespace std;

// Using Static Variables

double e1(int x, int n)
{
  static double p = 1, f = 1;
  double r;
  if(n == 0)
    return 1;
  r = e1(x, n - 1);
  p = p * x;
  f = f * n;
  return r + p / f;
}

// Horner’s Rule

double e2(int x, int n)
{
  static double s;
  if(n == 0)
    return s;
  s = 1 + x * s / n;
  return e2(x, n - 1);
}

// Iterative

double e3(int x, int n)
{
  double s = 1, num = 1, den = 1;
  for(int i = 1; i <= n; i++)
  {
    num *= x;
    den *= i;
    s += num / den;
  }
  return s;
}

int main()
{
  // cout << e1(4, 18) << endl;
  // cout << e2(2, 10) << endl;
  cout << e3(1, 10) << endl;
  return 0;
}