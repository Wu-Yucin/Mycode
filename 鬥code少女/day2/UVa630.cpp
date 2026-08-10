#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,t,tmp;
    cin >> n >> tmp;
    for (int i=0;i<n;++i){
        cin >> t;
        string alpha[1000]={0},f;
        char c[26],b[t][26];
        for (int j=0;j<t;++j){
            cin >> alpha[j];
            for (int o=0;o<alpha[j].size();++o){
                b[j][alphap[j][o]-'a']++;
            }
        }
        while (cin >> f){
            if (f=="END") break;
            for (int i=0;i<f.size();++i){
                c[f[i]-'a']++;
            }
            bool yes=true;
            for (int i=0;i<t;++i){
                for (int j=0;j<26;++j){
                    if (!b[i][j]==c[j]) yes=false;
                }
            }
        }
    }
    return 0;
}
