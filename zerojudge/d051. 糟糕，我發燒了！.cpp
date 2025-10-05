#include<bits/stdc++.h>
using namespace std;

//f:華氏溫度
int f;
int main(){
    cin >> f;
    cout <<fixed <<setprecision(3);
    cout << (f-32)*((double)5/9);
    return 0;
}
