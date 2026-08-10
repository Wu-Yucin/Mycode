#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n){
        if (n==0) break;
        while (true){
            int tmp;
            vector<int> s;
            cin >> tmp;
            if (tmp==0) break;

            s.push_back(tmp);
            for (int i = 1; i < n; ++i){
                cin >> tmp;
                s.push_back(tmp);
            }

            stack<int> station;
            int idx = 0;

            for (int i = 1; i <= n; ++i){
                station.push(i);
                while (!station.empty() && station.top() == s[idx]){
                    station.pop();
                    idx++;
                }
            }

            if (station.empty()){
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
        cout << "\n";
    }
    return 0;
}
