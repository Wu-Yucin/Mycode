#include<iostream>
using namespace std;

///k:幾份問卷,n:幾間店,id:客戶喜歡的商品編號數量,m:每間店的商品數量,s:每個商店的商品編號
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ///店家編號是從1算,但是陣列是從0,所以要取到1001個
    int k,n,id[1001]={0},m[1001]={0},s;
    cin >> k >> n;
    ///o:問卷的商品編號,mx_id:最受歡迎的商品編號
    int o,mx=0,mx_id=0;
    for (int i=0;i<k;++i){
        cin >> o;
        id[o]+=1;
    }
    for (int i=1;i<1001;++i){
        if (id[i]>mx){
            mx=id[i];  ///是要找編號,不是編號出現的次數
            mx_id=i;
        }
    }
    cout << mx_id << " ";

    for (int i=1;i<=n;++i){
        cin >> m[i];
    }
    ///sum:商品編號出現在問卷的次數總和
    ///mi:最不受歡迎的商店數值,unpopular:最不受歡迎的商店編號
    int mi=1000001,unpopular=0;
    for(int i=1;i<=n;++i){
        int sum=0;
        for (int j=0;j<m[i];++j){
            cin >> s;
            if (id[s]!=0){
                sum+=id[s];
            }
        }
        if (sum<mi){
            mi=sum;
            unpopular=i;
        }
    }
    cout << unpopular;
    return 0;
}
