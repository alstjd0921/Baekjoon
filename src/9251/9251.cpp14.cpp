#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

string S1, S2;
int len1, len2;

int cache[2000][2000];

int LCS(int start1, int start2) {
    int &ret = cache[start1][start2];
    if (ret != -1) {
        return ret;
    }
    if (start1 == len1 || start2 == len2) {
        return ret = 0;
    }
    ret = 0;
    if (S1[start1] == S2[start2]) {
        ret = LCS(start1 + 1, start2 + 1) + 1;
    }
    ret = max(ret, LCS(start1 + 1, start2));
    ret = max(ret, LCS(start1, start2 + 1));
    return ret;
}

int main(int argc, const char *argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> S1 >> S2;
    len1 = S1.length();
    len2 = S2.length();
    memset(cache, -1, 2000 * 2000 * sizeof(int));
    cout << LCS(0, 0) << endl;

    return 0;
}