#include<iostream>
using namespace std;

//x:位置,r:接球的左右延伸長度,v:可接球的球速上限,n:練習的次數,p:落球位置,s:球速
int x,r,v,n,p,s;
int main(){
    cin >> x >> r >> v;
    cin >> n;
    for (int i=1;i<=n;++i){
        cin >> p >> s;
        if ((p-x)<=10 || (x-p)<=10){
            if (s <= v){
                x = p;
            }
            else if (p<x){
                x += 15;
            }
            else{
                x -= 15;
            }
            }
    }
    cout << x;
    return 0;
}
