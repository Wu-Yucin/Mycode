#include<iostream>
using namespace std;

///n:十進位數字,three:三進位數字
int main(){
    int n;
    while (cin >> n){
        if (n<0){
            break;
        }
        int three[50]={0},p=0;
        if (n==0){
            cout << 0;
        }
        while (n!=0){
            three[p]=n%3;
            n/=3;
            p++;
        }
        for (int i=p-1;i>=0;--i){
            cout << three[i];
        }
        cout << endl;
    }
    return 0;
}
