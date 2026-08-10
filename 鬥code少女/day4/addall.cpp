#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n){
        if (n==0) break;
        int val;
        long long cost=0;
        priority_queue<int,vector<int>,greater<int> > pd;
        for (int i=0;i<n;++i){
            cin >> val;
            pd.push(val);
        }
        int tmp=0;
        for (int i=0;i<n-1;++i){
            tmp+=pd.top();
            pd.pop();
            tmp+=pd.top();
            pd.pop();
            cost+=tmp;
            pd.push(tmp);
            tmp=0;
        }
        cout << cost << "\n";
    }
    return 0;
}
