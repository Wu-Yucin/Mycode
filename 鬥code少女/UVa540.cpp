#include <bits/stdc++.h>
using namespace std;

int team_of[1000000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    while (cin >> t && t != 0) {
        cout << "Scenario #" << k++ << "\n";

        for (int i = 0; i < t; ++i) {
            int n, key;
            cin >> n;
            for (int j = 0; j < n; ++j) {
                cin >> key;
                team_of[key] = i;
            }
        }

        queue<int> team_order;
        vector<queue<int>> team_q(t);
        string s;
        while (cin >> s && s != "STOP") {
            if (s == "ENQUEUE") {
                int tmp;
                cin >> tmp;
                int team_id = team_of[tmp];

                if (team_q[team_id].empty()) {
                    team_order.push(team_id);
                }
                team_q[team_id].push(tmp);
            }
            else if (s == "DEQUEUE") {
                int front_team = team_order.front();

                cout << team_q[front_team].front() << "\n";
                team_q[front_team].pop();

                if (team_q[front_team].empty()) {
                    team_order.pop();
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
