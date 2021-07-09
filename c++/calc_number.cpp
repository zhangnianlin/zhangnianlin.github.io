#include <iostream>

using namespace std;

int main(){

  int input_number_count;

  int max{0}, min{10000}, sum{0};
  //cout << "Please type the number count you want: \n";
  cin >> input_number_count ;
  if (input_number_count > 100 | input_number_count < 0 ) {
    cout << "Please type a valid number(less or equal then 100).\n";
    return 1;
  }

  int numbers[input_number_count-1];
  //cout << "Please type numbers you want to do calculate:\n";

  for (int i = 0; i < input_number_count; i++) {
    cin >> numbers[i];
    if (numbers[i] < -10000 | numbers[i] > 10000 ) {
      cout << "input numbers must between -10000 ~ 10000.\n";
      return 1;
    }
    sum += numbers[i];
    if (numbers[i] > max) {
      max = numbers[i];
    }
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }

  cout << sum << " " << min << " " << max;
}
