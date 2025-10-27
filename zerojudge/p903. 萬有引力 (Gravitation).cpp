#include<bits/stdc++.h>
using namespace std;

//m1:第一個物體的質量,m2:第二個物體的質量,r:兩物體的距離
int m1,m2,r;
int main(){
    cin >> m1 >> m2 >> r;
    cout << (6*m1*m2)/(r*r);
    return 0;
}
