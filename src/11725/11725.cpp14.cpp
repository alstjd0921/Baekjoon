#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

vector<int> node[100000];
int parent[100000];

void solver(int n) {
    for (int next: node[n]) {
        if (parent[next] == -1) {
            parent[next] = n;
            solver(next);
        }
    }
}

int main(int argc, const char *argv[]) {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N - 1; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        node[a - 1].push_back(b - 1);
        node[b - 1].push_back(a - 1);
    }
    memset(parent, -1, sizeof(parent));
    solver(0);
    for (int i = 1; i < N; i++) {
        printf("%d\n", parent[i] + 1);
    }

    return 0;
}