#include<iostream>
using namespace std;

///x:小智寶可夢生命值,y:火箭隊寶可夢生命值
int x,y;
int main(){
    cin >> x >> y;
    ///a:小智寶可夢攻擊力,b:火箭隊寶可夢攻擊力
    int a,b;
    while (cin >> a >> b){
        y -= a;
        x -= b;
        if (y<=0){
            cout << "WIN";
            break;
        }
        else if (x<=0){
            cout << "LOSE";
            break;
        }
    }
    return 0;
}
