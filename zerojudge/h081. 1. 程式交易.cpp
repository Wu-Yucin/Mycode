#include<iostream>
using namespace std;

///i:正整數,n:每個時間點股票的價格,d:股票買賣的常數,s:總利潤
int main(){
    int i,n[100]={0},d,s=0;
    cin >> i >> d;
    for (int j=1;j<i+1;++j){
        cin >> n[j];
    }
    ///k:買進時間,p:賣出時間
    int k=1,p=0;
    for(int j=2;j<i+1;++j){
        if (k!=0 && (n[k]+d)<=n[j]){
            s+=n[j];
            s-=n[k];
            k=0;
            p=j;
        }
        if (k==0 && n[j]<=(n[p]-d)){
            k=j;
            p=0;
        }
    }
    cout << s;
    return 0;
}
