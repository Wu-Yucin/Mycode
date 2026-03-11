#include<iostream>
using namespace std;

///n:到幾次水,w:水杯寬,h:水杯高,v:每次倒的容量,max_h:最大的高度,total_v:總體積,last_h:上次的高
int main(){
    int n, w1, w2, h1, h2, v, max_h = 0,total_v = 0, last_h = 0;
    cin >> n >> w1 >> w2 >> h1 >> h2;
    for (int i=0; i<n; ++i){
        cin >> v;
        total_v+=v;
        ///v1:第一階段體積,v2:第二階段體積,now_h:這次高
        int v1 = w1 * w1 * h1;
        int v2 = w2 * w2 * h2;
        int now_h = 0;

        if (total_v <= v1){
            now_h = total_v / (w1 * w1);
        }
        else if (total_v >= (v1 + v2)){
            now_h = h1 + h2;
        }
        else {
            now_h = h1 + (total_v - v1) / (w2 * w2);
        }
        ///high:上升高度
        int high=now_h-last_h;
        if (high > max_h){
            max_h = high;
        }
        last_h=now_h;
    }
    cout << max_h;
    return 0;
}
