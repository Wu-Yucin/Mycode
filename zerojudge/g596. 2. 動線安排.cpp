#include <iostream>
#include <algorithm>
using namespace std;

int arr[105][105];
int m, n, h, r, c, t, ans, mx_ans = 0;

void add() {
    int k, i, j;
    arr[r][c] = 9;
    for (k = 0; k < 4; k++) {
        int dr = (k - 1) % 2;
        int dc = (k - 2) % 2;
        i = r + dr;
        j = c + dc;
        while (arr[i][j] != -1 && arr[i][j] != 9) {
            i += dr;
            j += dc;
        }

        if (arr[i][j] == 9) {
            i -= dr;
            j -= dc;
            while (i != r || j != c) {
                arr[i][j] += 1;
                i -= dr;
                j -= dc;
            }
        }
    }
}

void rem() {
    int k, i, j;
    for (k = 0; k < 4; k++) {
        int dr = (k - 1) % 2;
        int dc = (k - 2) % 2;
        i = r + dr;
        j = c + dc;

        while (arr[i][j] != -1 && arr[i][j] != 9 && arr[i][j] >= 1) {
            i += dr;
            j += dc;
        }

        if (arr[i][j] == 9) {
            i -= dr;
            j -= dc;
            while (i != r || j != c) {
                arr[i][j] -= 1;
                i -= dr;
                j -= dc;
            }
        }
    }
    arr[r][c] = 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n >> h;

    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) {
            arr[i][j] = -1;
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] = 0;
        }
    }

    while (h--) {
        cin >> r >> c >> t;
        r = r + 1;
        c = c + 1;

        if (t == 0) {
            if (arr[r][c] >= 1) {
                arr[r][c] = 9;
                rem();
            }
            add();
        } else if (t == 1) {
            rem();
        }

        ans = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (arr[i][j] > 0) {
                    ans++;
                }
            }
        }
        if (ans > mx_ans) mx_ans = ans;
    }

    cout << mx_ans << endl << ans;

    return 0;
}
