#include<bits/stdc++.h>
using namespace std;

///a,b,c:一元二次方程式的係數,x1,x2:答
int a,b,c,x1=0,x2=0;
int main(){
    cin >> a;
    cin >> b;
    cin >> c;
    x1 = (-b-sqrt(b*b-4*a*c)) / (2*a);
    x2 = (-b+sqrt(b*b-4*a*c)) / (2*a);
    if (x1>x2){
        cout << x2 << " " << x1;
    }
    else{
        cout << x1 << " " << x2;
    }
    return 0;
}
