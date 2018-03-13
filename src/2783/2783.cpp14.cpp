#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {

  int X, Y, N;
  double result;
  scanf("%d %d", &X, &Y);
  result = 1.0 * X / Y;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d %d", &X, &Y);
    result = min(result, 1.0 * X / Y);
  }
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << 1000 * result << endl;

  return 0;
}
