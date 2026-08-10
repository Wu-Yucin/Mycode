#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    vector<int> sub;
    int tmp;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> tmp;
        sub.push_back(tmp);
    }

    int now,max_length=1;
    vector<int> dp(n,1);
    for (int i=0;i<n;++i){
        for (int j=0;j<i;++j){
            if (sub[i]>sub[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        max_length=max(max_length,dp[i]);
    }
    cout << max_length;
    return 0;
}
