#include <bits/stdc++.h>
using namespace std;

struct Node {
    int left = 0;
    int right = 0;
};

vector<Node> tree;

void insert_node(int root, int key) {
    int current = root;
    while (true) {
        if (key < current) {
            if (tree[current].left == 0) {
                tree[current].left = key;
                break;
            }
            current = tree[current].left;
        }
        else {
            if (tree[current].right == 0) {
                tree[current].right = key;
                break;
            }
            current = tree[current].right;
        }
    }
}

void pre_order(int root) {
    if (root == 0) return;

    cout << root << " ";
    pre_order(tree[root].left);
    pre_order(tree[root].right);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n) {
        tree.clear();
        tree.resize(n+1);

        int root;
        cin >> root;

        for (int i = 1; i < n; ++i) {
            int k;
            cin >> k;
            insert_node(root, k);
        }

        pre_order(root);
        cout << "\n";
    }

    return 0;
}
