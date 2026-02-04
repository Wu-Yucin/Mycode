#include<iostream>
using namespace std;

 int main(){
     ///n:正整數,first:判斷*,c:判斷質因數出現的次數
    int n;
    bool first=true;
    cin >> n;
    for (int i=2;i<n;++i){
        int c=0;
        while (n%i==0){
            c+=1;
            n/=i;
        }
        if (c>0){
            if (!first){
                cout << " * ";
            }
            cout << i;
            if (c >1){
                cout << "^" << c;
            }
            first=false;
        }
    }
    if (n>1){
        if (!first){
            cout << " * ";
        }
        cout << n;
    }
    return 0;
 }
