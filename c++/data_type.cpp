#include <iostream>

using namespace std;

int main ()
{
  int a,b;
  int result;

  a = 5;
  b = 2;
  int x(1);
  int y{2};
  a = a + 1;
  result = a-b;

  int z{x + y};

  cout << result;
  cout << "\n";
  cout << a;
  cout << "\n";
  cout << z;

  return 0;
}
