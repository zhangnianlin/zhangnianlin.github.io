#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

void sort(int &a, int &b, int &c) {
  if (a>b) {
    swap(a,b);
  }
  if (a > c) {
    swap(a,c);
  }
  if(b>c){
    swap(b,c);
  }
}

bool is_right_angled_triangle(int a, int b, int c) {
  if (a < 1 | a > 10000 | b < 1 | b > 10000 | c < 1 | c > 10000) {
    cout << "Length must less then 10000 and larger or equal then  1." << endl;
    return 1;
  }
  sort(a,b,c);

  if ((a * a + b * b) == c * c) {
    cout << "True"<< endl;
    return true;
  } else {
    cout << "False" << endl;
    return false;
  }
}

int main() {
  int num1(0);
  int num2(0);
  int num3(0);

  while(true){
    cin >> num1 >> num2 >> num3;
    is_right_angled_triangle(num1, num2, num3);
  }
}
