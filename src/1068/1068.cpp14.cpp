#include <cstdio>
#include <set>

using namespace std;

typedef set<int> IntSet;
IntSet childNode[50];
int root;

int countLeafNode(int start) {
    IntSet currentSet = childNode[start];
    if (currentSet.size() == 0) {
        return 1;
    }
    int result = 0;
    for (IntSet::iterator iter = currentSet.begin(); iter != currentSet.end(); iter++) {
        result += countLeafNode(*iter);
    }
    return result;
}

int main(int argc, const char *argv[]) {
    int N, input;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &input);
        if (input == -1) {
            root = i;
        } else {
            childNode[input].insert(i);
        }
    }

    scanf("%d", &input);

    if (input == root) {
        printf("0\n");
    } else {
        for (int i = 0; i < N; i++) {
            if (childNode[i].find(input) != childNode[i].end()) {
                childNode[i].erase(input);
            }
        }
        printf("%d\n", countLeafNode(root));
    }

    return 0;
}