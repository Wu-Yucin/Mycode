#include<iostream>
using namespace std;

///n:數列長度,k:幾筆詢問,x:詢問的數
int main(){
    int n,k,a[100001]={0},x;
    cin >> n >> k;
    for (int i=1;i<=n;++i){
        cin >> a[i];
    }
    for (int i=0;i<k;++i){
        cin >> x;
        int l=1,r=n,m,idx=0;
        while(l<=r){
            m=(r+l)/2;
            if (x<a[m]){
                r=m-1;
            }
            else if (x>a[m]){
                l=m+1;
            }
            else{
                idx=m;
                break;
            }
        }
        cout << idx << endl;
    }
    return 0;
}
