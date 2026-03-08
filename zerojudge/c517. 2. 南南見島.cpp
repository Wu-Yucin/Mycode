#include<iostream>
using namespace std;

///x,y:初始位置,ws:鳥巢西南角,en:東北角,dx:到x的距離,dy:到y的距離
int main(){
    long long x, y, ws_x, ws_y, en_x, en_y;
    cin >> x >> y >> ws_x >> ws_y >> en_x >> en_y;
    long long dx = 0, dy = 0;
    if (x < ws_x) {
        dx = ws_x - x;
    }
    else if (x > en_x) {
        dx = x - en_x;
    }
    else dx = 0;
    if (y < ws_y) {
        dy = ws_y - y;
    }
    else if (y > en_y) {
        dy = y - en_y;
    }
    else dy = 0;
    cout << dx + dy << endl;
    return 0;
}
