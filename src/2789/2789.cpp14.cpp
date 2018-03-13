#include <cstdio>
#include <set>

using namespace std;

int main(int argc, const char *argv[]) {
  char c;
  set<char> nop;
  nop.insert('G');
  nop.insert('I');
  nop.insert('M');
  nop.insert('R');
  while ((c = getchar()) != '\n') {
    if (c > 'E' && nop.find(c) == nop.end())
      putchar(c);
  }
  return 0;
}
