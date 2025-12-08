#include<iostream>
using namespace std;

///n:員工數,a b c:係數,x:兩工廠員工,y:兩工廠收益
int main(){
    int n,a1,b1,c1,a2,b2,c2,x1,x2,y1,y2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    cin >> n;
    int max=-1000000000;
    for (int i=0;i<(n+1) ;++i){
        x1=i;
        x2=n-i;
        y1=a1*x1*x1+b1*x1+c1;
        y2=a2*x2*x2+b2*x2+c2;
        if ((y1+y2)>max){
            max=y1+y2;
        }
    }
    cout << max;
    return 0;
}
