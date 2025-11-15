#include<iostream>
using namespace std;

///t1,t2,t3:時間,v1,v2,v3:速度,a:加速度
int t1,t2,t3,v1,v2,v3,a=0;
int main(){
    cin >> t1 >> v1;
    cin >> t2 >> v2;
    cin >> t3;
    a = (v2-v1)/(t2-t1);
    v3 = v1+a*(t3-t1);
    if (v3==0){
        cout << "靜止";
    }
    else if (v3 > 0 && a==0){
        cout << "等速正向前進";
    }
    else if (v3 < 0 && a==0){
        cout << "等速負向前進";
    }
    else if (v3 > 0 && a > 0){
        cout << "加速正向前進";
    }
    else if (v3 > 0 && a < 0){
        cout << "減速正向前進";
    }
    else if (v3 < 0 && a > 0){
        cout << "減速負向前進";
    }
    else{
        cout << "加速負向前進";
    }
    return 0;
}
