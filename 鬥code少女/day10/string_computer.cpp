#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s1,s2;
    while (cin >> s1 && s1!="#"){
        cin >> s2;
        int dp[21][21]={0};
        for (int i=1;i<=s1.size();++i){
            dp[0][i]=dp[0][i-1]+1;
        }
        for (int j=1;j<=s2.size();++j){
            dp[j][0]=dp[j-1][0]+1;
        }

        for (int i=1;i<=s1.size();++i){
            for (int j=1;j<=s2.size();++j){
                dp[i][j]=min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
            }
        }
    }

    int i=s1.size(),j=s2.size();
    string s="E";
    while (i!=0 && j!=0){
        if (dp[i-1][j-1]<dp[i-1][j] && dp[i-1][j-1]<dp[i][j-1]){
            s+="C";
            s+=s2[j];
            s+=
        }
    }
    return 0;
}
