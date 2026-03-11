#include<iostream>
using namespace std;

///Case:幾次購物,n:商店數量,store:商店位置
int main(){
    int Case,n,store[20]={0};
    cin >> Case;
    for (int i=0;i<Case;++i){
        cin >> n;
        for (int j=0;j<n;++j){
            cin >> store[j];
        }
        int mx=0,mi=100;
        for (int j=0;j<n;++j){
            if (store[j]>mx){
                mx=store[j];
            }
            if (store[j]<mi){
                mi=store[j];
            }
        }
        cout << (mx-mi)*2 << endl;
    }
    return 0;
}
