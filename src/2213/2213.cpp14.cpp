#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int N, weight[10000], cache[10000][2];
vector<int> adj[10000], result;
bool visited[10000], sel_ed[10000];

int max_size(int root, bool can_sel) {
    int &ret = cache[root][can_sel];
    if (ret != -1) return ret;
    visited[root] = true;
    int include = weight[root], exclude = 0;
    for (int next: adj[root])
        if (!visited[next]) {
            include += max_size(next, false);
            exclude += max_size(next, true);
        }
    visited[root] = false;
    if (can_sel && include > exclude) {
        sel_ed[root] = true;
        return ret = include;
    }
    return ret = exclude;
}

void getNodes(int root, bool can_sel) {
    visited[root] = true;
    if (can_sel && sel_ed[root]) {
        result.push_back(root);
        for (int next: adj[root]) {
            if (!visited[next]) getNodes(next, false);
        }
    } else {
        for (int next: adj[root]) {
            if (!visited[next]) {
                getNodes(next, true);
            }
        }
    }
    visited[root] = false;
}

int main(int argc, const char *argv[]) {
    scanf("%d", &N);
    memset(cache, -1, sizeof(cache));
    for (int i = 0; i < N; i++)
        scanf("%d", weight + i);
    for (int i = 0; i < N - 1; i++) {
        int U, V;
        scanf("%d %d", &U, &V);
        adj[U - 1].push_back(V - 1);
        adj[V - 1].push_back(U - 1);
    }
    printf("%d\n", max_size(0, true));
    getNodes(0, true);
    sort(result.begin(), result.end());
    for (int node: result) {
        printf("%d ", node + 1);
    }
    return 0;
}