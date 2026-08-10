#include<bits/stdc++.h>
using namespace std;

int n,m,ans[100000];

int methods(int u){
    if (ans[u]!=-1) return ans[u];

    if (ans[u-1]==-1) methods(u-1);
    if (ans[u-2]==-1) methods(u-2);
    return ans[u]=ans[u-1]+ans[u-2];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for (int i=0;i<100000;++i){
        ans[i]=-1;
    }
    cin >> n;
    ans[1]=1;
    ans[2]=1;
    for (int i=0;i<n;++i){
        cin >> m;
        cout << methods(m) << "\n";
    }
    return 0;
}
