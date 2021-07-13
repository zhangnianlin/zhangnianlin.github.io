#include <iostream>
using namespace std;

//判断n是否为回文数
bool symm(unsigned n) {
  unsigned i = n;
  unsigned m = 0;

  int x = 0;
  while (i > 0) {
    m = m * 10 + i % 10;
    i /= 10;
    x+=1;
  }
  cout << x << endl;

  return m == n;
}

int main() {

  //for(unsigned m = 11; m < 1000; m++)
  //  if (symm(m) && symm(m * m) && symm(m * m * m)) {
  //    cout << "m = " << m;
  //    cout << "  m * m = " << m * m;
  //    cout << "  m * m * m = "
  //         << m * m * m << endl;
  //  }
  symm(233);

  return 0;
}
