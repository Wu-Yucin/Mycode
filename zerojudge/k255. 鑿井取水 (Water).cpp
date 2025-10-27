#include<bits/stdc++.h>
using namespace std;

//n:未來幾天,w:每天產生水量,m:當天需用水的用戶量,x:每戶需用水量,s:水井剩餘水量,t:第幾天枯竭
int n,w,m,x,s=0,t=0;
int main(){
    cin >> n >> w;
    for (int i=1;i<=n ;++i){
        s += w;
        cin >> m;
        for (int j=1;j<=m ;++j){
            cin >> x;
            s -= x;
        }
        if ((s < 0) && (t==0)){
                cout << i;
                ++t;
        }
    }
    if (t==0){
        cout << -1;
    }
    return 0;
}
