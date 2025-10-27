#include<bits/stdc++.h>
using namespace std;

//k:總公里數,w:車輛延滯時間,s:上車時間,e:下車時間,m:總金額
int k,w,s,e,m;
int main(){
    cin >> k >> w >> s >> e >> m;
    if (k <= 2){
        m = 20;
    }
    else{
        m = 20+5*(k-2);
    }
    m = m + (w/2*5);
    if (s<=18 && e>=19){
        m += 185;
    }
    if (s<=19 && e>=20){
        m += 195;
    }
    if (s<=20 && e>=21){
        m += 205;
    }
    if (s<=21 && e>=22){
        m += 215;
    }
    if (s<=22 && e>=23){
        m += 225;
    }
    cout << m;
    return 0;
}
