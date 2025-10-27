#include<bits/stdc++.h>
using namespace std;

//k:生命值,x1 or Y1:兩種倍數,x2 or Y2:減少的生命值,p:當前位置
int k,x1,Y1,x2,Y2,p=0;
int main(){
    cin >> k;
    cin >> x1 >> Y1;
    cin >> x2 >> Y2;
    while(k>0){
        p += k;
        if (p%x1==0){
            k -= Y1;
        }
        if (p%x2==0){
            k -= Y2;
        }
    }
    cout << p;
    return 0;
}
