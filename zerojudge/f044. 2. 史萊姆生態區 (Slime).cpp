#include<bits/stdc++.h>
using namespace std;

//n:史萊姆王的數量比,t:小史萊姆的數量比,T:經過幾天
int n,t,T;
int main(){
    cin >> n >> t;
    if (n!=1){
        t/=n;
        n=1;
    }
    while(t!=0){
        T += 1;
        t = (n+t)/2-1;
    }
    cout << T;
    return 0;
}
