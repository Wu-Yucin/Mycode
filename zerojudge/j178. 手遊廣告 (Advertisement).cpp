#include<bits/stdc++.h>
using namespace std;

//m:幾隻怪物;a:戰力值;i:怪物戰力值
int m,a,i;
int main(){
    cin >> m >> a;
    for (int j=1 ; j<=m ; ++j){
        cin >> i;
        if (a>i){
            a+=i;
        }
        else{
            break;
        }
    }
    cout << a;
    return 0;
}
