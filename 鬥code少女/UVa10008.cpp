#include <bits/stdc++.h>
using namespace std;

struct mp {
    char e;
    int num;
};

bool cmp(mp a, mp b) {
    if (a.num != b.num) return a.num > b.num;
    return a.e < b.e;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string s;
    mp h[26];

    for (int i = 0; i < 26; ++i) {
        h[i].e = 'A' + i;
        h[i].num = 0;
    }

    if (cin >> n) {
        cin.ignore();

        for (int i = 0; i < n; ++i) {
            getline(cin, s);

            for (int j = 0; j < s.size(); ++j) {
                if (isalpha(s[j])) {
                    char upper_c = toupper(s[j]);
                    h[upper_c - 'A'].num++;
                }
            }
        }

        sort(h, h + 26, cmp);

        for (int i = 0; i < 26; ++i) {
            if (h[i].num == 0) break;
            cout << h[i].e << " " << h[i].num << "\n";
        }
    }

    return 0;
}
