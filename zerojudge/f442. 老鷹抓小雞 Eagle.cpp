#include<iostream>
using namespace std;

///n:小雞數量,c:小雞的編號,e:老鷹的編號,q:幾回合,caught:被抓到的小雞編號
int main(){
    int n,c[2000],e,q,caught;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> c[i];
    }
    cin >> e;
    cin >> q;
    for (int i=0;i<q;++i){
        cin >> caught;
        for (int j=0;j<n;++j){
            if (c[j]==caught){
                c[j]=e;
                break;
            }
        }
        e=caught;
    }
    for (int i=0;i<n;++i){
        cout << c[i] << " ";
    }
    return 0;
}
