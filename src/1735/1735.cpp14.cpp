#include <algorithm>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
  int temp;
  while (b) {
    temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int main(int argc, const char *argv[]) {
  int a, b, c, d;
  int p, q;
  cin >> a >> b >> c >> d;
  p = a * d + b * c;
  q = b * d;
  cout << p / gcd(p, q) << ' ' << q / gcd(p, q) << endl;
  return 0;
}
