#include <iostream>

using namespace std;

// negitive nth power of 2

int main(void) {
  int nth;
  int pow = 2;
  double ans = 1;

  cin >> nth;

  if (nth > 63) {
    cout << "input larger then 63 is not supported!";
    return 1;
  }

  for (int i = 0; i < nth; i++) {
    ans = ans / pow; // division
  }

  cout.precision(20);
  cout << ans;

  return 0;
}
