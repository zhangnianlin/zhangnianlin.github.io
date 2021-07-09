#include <iostream>
using namespace std;
int main() {
  string sb;
  cin >> sb;
  int oct = 0;
  int base = 1;

  int l = sb.length();
  if (l > 10) {
    cout << "binary length only need to be 10." << endl;
    return 1;
  }

  for (int i = l-1 ; i >= 0 ; i--) {
    if (sb.back() != '1' & sb.back() != '0') {
      cout << "please type a valid binary number, which only contains 1 or 0;" << endl;
      return 1;
    }
    if (sb.back() == '1') {
      oct += base;
    }
    sb.pop_back();
    base *= 2;
  }

  cout << oct << endl;
  return 0;
}
