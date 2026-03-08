#include<iostream>
using namespace std;

///1:西南,2:東北,3,4:兩人
int main(){
    long long x1,x2,x3,x4,y1,y2,y3,y4,dx=0,dy=0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (x3<x4){
        if ( (x4-x3)<(x2-x4+x3-x1) ){
            dx=x4-x3;
        }
        else dx=(x2-x4+x3-x1);
    }
    else{
        if ( (x3-x4)<(x2-x3+x4-x1) ){
            dx=x3-x4;
        }
        else dx=(x2-x3+x4-x1);
    }
    if (y3<y4){
        if ( (y4-y3)<(y2-y4+y3-y1) ){
            dy=y4-y3;
        }
        else dy=(y2-y4+y3-y1);
    }
    else{
        if ( (y3-y4)<(y2-y3+y4-y1) ){
            dy=y3-y4;
        }
        else dy=(y2-y3+y4-y1);
    }
    cout << dx+dy;
    return 0;
}
