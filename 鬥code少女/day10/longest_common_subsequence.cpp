#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s1,s2;
    while (cin >> s1 >> s2){
        int dp[1001][1001]={0};
        for (int i=1;i<=s1.size();++i){
            for (int j=1;j<=s2.size();++j){
                if (s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }

        cout << dp[s1.size()][s2.size()] << "\n";
    }
    return 0;
}
