#include<iostream>
using namespace std;

///n:幾個商品,d:價格差異,Sum:購買費用總和,Count:購買商品數量
int main(){
    int n,d,Sum=0,Count=0;
    cin >> n >> d;
    for (int i=0;i<n;++i){
        int a,b,c,Max,Min;
        cin >> a >> b >> c;
        Max=a;
        if (b>Max){
            Max=b;
        }
        if(c>Max){
            Max=c;
        }
        Min=a;
        if(b<Min){
            Min=b;
        }
        if(c<Min){
            Min=c;
        }
        if(Max-Min>=d){
            Count+=1;
            Sum+=((a+b+c)/3);
        }
    }
    cout << Count << " " << Sum;
    return 0;
}
