#include <cstdio>
#include <vector>

using namespace std;

typedef pair<int, int> intPair;

int N, result = 0;
vector<intPair> adj[100000];
bool visited[100000];

int width(int node) {
    visited[node] = true;
    if (adj[node].empty()) {
        return 0;
    }
    int fValue = 0, sValue = 0;
    for (auto &curr: adj[node]) {
        if (visited[curr.first]) {
            continue;
        }
        int cValue = curr.second + width(curr.first);
        if (cValue > fValue) {
            sValue = fValue;
            fValue = cValue;
        } else if (cValue > sValue) {
            sValue = cValue;
        }
    }
    result = max(result, fValue + sValue);
    return fValue;
}

int main(int argc, const char *argv[]) {
    int root = -1, maxD = 0;
    scanf("%d", &N);
    for (int i = 0; i < N - 1; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        adj[u - 1].push_back(intPair(v - 1, w));
        adj[v - 1].push_back(intPair(u - 1, w));
        if (maxD < adj[u - 1].size()) {
            maxD = adj[u - 1].size();
            root = u - 1;
        }
        if (maxD < adj[v - 1].size()) {
            maxD = adj[v - 1].size();
            root = v - 1;
        }
    }
    visited[root] = true;
    width(root);
    printf("%d\n", result);

    return 0;
}