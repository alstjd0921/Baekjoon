#include <cstdio>
#include <cstring>
#include <iostream>
#include <stack>

using namespace std;

int main(int argc, const char *argv[]) {
  int n;
  cin >> n;
  while (n--) {
    char A[51];
    stack<char> s;
    scanf("%s", A);
    for (int i = 0; i < strlen(A); ++i) {
      char a = A[i];
      if (s.empty())
        s.push(a);
      else if (s.top() == '(' && a == '(')
        s.push(a);
      else if (s.top() == '(' && a == ')')
        s.pop();
      else if (s.top() == ')')
        break;
    }
    if (s.empty()) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
