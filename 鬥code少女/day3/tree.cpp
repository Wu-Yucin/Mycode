#include <bits/stdc++.h>
using namespace std;

int parent_arr[10005];

int get_depth(int u) {
    int depth = 0;
    while (u != 0) {
        depth++;
        u = parent_arr[u];
    }
    return depth;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            parent_arr[i] = 0;
        }

        for (int i = 0; i < n - 1; ++i) {
            int p, c;
            cin >> p >> c;
            parent_arr[c] = p;
        }

        int a, b;
        cin >> a >> b;

        int depth_a = get_depth(a);
        int depth_b = get_depth(b);

        while (depth_a > depth_b) {
            a = parent_arr[a];
            depth_a--;
        }
        while (depth_b > depth_a) {
            b = parent_arr[b];
            depth_b--;
        }

        while (a != b) {
            a = parent_arr[a];
            b = parent_arr[b];
        }
        cout << a << "\n";
    }

    return 0;
}
