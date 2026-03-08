#include<iostream>
using namespace std;

///i:十進位的數字,b:二進位的數字
int main(){
    int i;
    while (cin >> i){
        if (i==0){
            break;
        }
        int b[50]={0},p=0;
        while (i!=0){
            b[p]=i%2;
            i/=2;
            p++;
        }
        cout << "The parity of ";
        ///one:幾個1
        int one=0;
        for (int i=p-1;i>=0;--i){
            if (b[i]==1){
                one++;
            }
            cout << b[i];
        }
        cout << " is " << one << " (mod 2)." << endl;
    }
    return 0;
}
