#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string op;
    priority_queue<
        pair<pair<int, int>, int>,
        vector<pair<pair<int, int>, int>>,
        greater<pair<pair<int, int>, int>>
    > pq;

    while (cin >> op && op != "#") {
        int id, period;
        cin >> id >> period;
        pq.push({{period, id}, period});
    }

    int k;
    cin >> k;

    while (k--) {
        auto cur = pq.top();
        pq.pop();

        int next_time = cur.first.first;
        int id        = cur.first.second;
        int period    = cur.second;

        cout << id << "\n";

        pq.push({{next_time + period, id}, period});
    }

    return 0;
}
