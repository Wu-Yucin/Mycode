#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,a[20],d[20],h[20],
    mxa=0,mxd=0,mxh=0,
    ida=0,idd=0,idh=0,
    card[20]={0};
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> a[i] >> d[i] >> h[i];
        if (a[i]>mxa){
            mxa=a[i];
        }
        if (d[i]>mxd){
            mxd=d[i];
        }
        if (h[i]>mxh){
            mxh=h[i];
        }
    }
    for (int i=0;i<n;++i){
        if (a[i]==mxa) card[i]++;
        if (d[i]==mxd) card[i]++;
        if (h[i]==mxh) card[i]++;
    }
    int win=0,mx=0;
    for (int i=0;i<n;++i){
        if (card[i]>mx){
            mx=card[i];
            win=i+1;
        }
    }
    cout << win;
    return 0;
}
