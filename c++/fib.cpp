#include <iostream>
using namespace std;

int fib(int n) {
  int x(0);
  if (n == 0 | n == 1) {
    x = 1;
  } else {
    x = fib(n-1) + fib(n-2);
  }
  return x;
}

int main() {
  int n (0);
  cin >> n;
  if (n < 0 | n > 30 ) {
    cout << "Please type a number n which 0 <= n <= 30." << endl;
    return 1;
  }
  int y = fib(n);
  cout << y << endl;
}
