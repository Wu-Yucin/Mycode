#include<iostream>
using namespace std;

///w:幾條紋路,h:幾列,l:路
int main(){
    int w,h;
    char l[102][21]={0};
    cin >> w >> h;
    for (int i=1;i<(h+1);++i){
        for (int j=1;j<(2*w);++j){
            cin >> l[i][j];
        }
    }
    ///p:當前路的編號
    for (int i=1;i<(w*2);i=i+2){
        int p=i;
        for (int j=1;j<(h+1);++j){
            if (l[j][p+1]=='-'){
                p=p+2;
            }
            else if (l[j][p-1]=='-'){
                p=p-2;
            }
        }
        cout << (p/2+1) << " ";
    }
    return 0;
}
