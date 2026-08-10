#include<bits/stdc++.h>
using namespace std;

vector<int> h;
vector<long long> ans;
int n,k;

long long cost(int m){
    if (ans[m]!=-1) return ans[m];

    long long min_cost=100000000000000;
    for (int i=1;i<=k;++i){
        if (m-i<=0) return ans[m]=min_cost;
        if (ans[m-i]==-1) cost(m-i);
        if (ans[m-i]+abs(h[m]-h[m-i]) < min_cost){
            min_cost=ans[m-i]+abs(h[m]-h[m-i]);
        }
    }
    return ans[m]=min_cost;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    int tmp;
    h.push_back(-1);
    for (int i=0;i<n;++i){
        cin >> tmp;
        h.push_back(tmp);
    }
    ans.resize(n+1);
    for (int i=0;i<=n;++i) ans[i]=-1;

    ans[1]=0;
    cout << cost(n);
    return 0;
}
