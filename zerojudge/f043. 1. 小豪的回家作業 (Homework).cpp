#include<bits/stdc++.h>
using namespace std;

//r:答案,a:加數,s:所求的加數
int r,a,s;
int main(){
    cin >> r >> a;
    if (r==a){
        a -= 3;
        s = r-a;
    }
    else{
        s = r-a;
    }
    if (a>=s){
        cout << s << "+" << a << "=" << r;
    }
    else{
        cout << a << "+" << s << "=" << r;
    }
    return 0;
}
