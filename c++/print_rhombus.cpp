#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num;
  cin >> num;

  if (num > 10) {
    cout << "Please type a number which less then 10." << endl;
    return 1;
  }

  // construct a symmetry number list. -2 -1 0 1 2
  int magic = num - 2 * num + 1;

  int rhombus_length = 2*num-1;
  for (int m = magic; m < num; m++){
    int absm = abs(m);
    for (int j = abs(m); j>0 ; j--){
      cout << " ";
    }
    for(int j = rhombus_length - 2*absm; j > 0; j--){
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
