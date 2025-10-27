#include<iostream>
using namespace std;

//n:n層的金字塔
int n;
int main(){
    cin >> n;
    for (int i=1;i<=n;++i){
        //輸出左邊的空白
        for (int j=1;j<=n-i;++j){
            cout << "_";
        }
        //輸出星號
        for (int j=1;j<=2*i-1;++j){
            cout << "*";
        }
        //輸出右邊的空白
        for (int j=1;j<=n-i;++j){
            cout << "_";
        }
        cout << endl;
    }
    return 0;
}
