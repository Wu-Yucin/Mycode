#include<iostream>
using namespace std;

///n,m:兩方士兵數
int main(){
    long long n,m;
    while (cin >> n >> m){
        if (n>m){
            cout << n-m << endl;
        }
        else cout << m-n << endl;
    }
    return 0;
}
