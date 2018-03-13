#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(0);

  string name;
  cin >> name;
  char alpha[26] = {0};
  int len = name.length();
  bool odd = false;
  char oddAlpha;
  for (int i = 0; i < len; i++) {
    alpha[name[i] - 'A']++;
  }
  for (int i = 0; i < 26; i++) {
    if (alpha[i] % 2) {
      if (odd) {
        cout << "I'm Sorry Hansoo" << endl;
        return 0;
      }
      odd = true;
      oddAlpha = i + 'A';
    }
  }
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < alpha[i] / 2; j++) {
      cout << (char)(i + 'A');
    }
  }
  if (odd) {
    cout << oddAlpha;
  }
  for (int i = 25; i >= 0; i--) {
    for (int j = 0; j < alpha[i] / 2; j++) {
      cout << (char)(i + 'A');
    }
  }
  cout << "\n";
  return 0;
}
