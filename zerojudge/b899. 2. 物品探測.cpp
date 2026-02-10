#include<iostream>
using namespace std;

///x,y:座標,d:三邊距離
int main(){
    int x[3]={0},y[3]={0},d01=0,d12=0,d02=0;
    for (int i=0;i<3;++i){
        cin >> x[i] >> y[i];
    }
    d01=(x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]);
    d12=(x[1]-x[2])*(x[1]-x[2]) + (y[1]-y[2])*(y[1]-y[2]);
    d02=(x[0]-x[2])*(x[0]-x[2]) + (y[0]-y[2])*(y[0]-y[2]);
    if (d01+d12==d02){
        cout << x[0]+x[2]-x[1] << " " << y[0]+y[2]-y[1];
    }
    else if (d01+d02==d12){
        cout << x[1]+x[2]-x[0] << " " << y[1]+y[2]-y[0];
    }
    else cout << x[0]+x[1]-x[2] << " " << y[0]+y[1]-y[2];
   return 0;
}
