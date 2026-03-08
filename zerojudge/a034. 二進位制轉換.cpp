#include<iostream>
using namespace std;

///n:十進位數字,s:二進位數字
int main(){
    int n;
    while (cin >> n){
        int s[50]={0},p=0;
        while (n!=0){
            s[p]=n%2;
            n/=2;
            p++;
        }
        for (int i=p-1;i>=0;--i){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
