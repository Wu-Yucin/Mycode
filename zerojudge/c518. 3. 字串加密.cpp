#include<iostream>
using namespace std;

char s[10000001]={0};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ///n:明文幾個字元,m:加密幾個步驟
    int n,m;
    ///p:明文
    string p;
    cin >> n >> m >> p;
    ///s:要被換得字元,t:換成的字元
    char t;
    /*我想直接設題目給的最大值,但所要占用的記憶體空間太大*/
    ///table:換字元的對照表
    char table[128]={0};
    for (int i=0;i<128;++i){
        table[i]=char(i);
    }
    /*在資料量大的時候,如果每個步驟都檢查一次字串,太慢了,
    所以在ASCII編碼的對照表上完成步驟,最後得到的轉換表再去看字串會比較快*/
    for (int i=1;i<=m;++i){
        cin >> s[i];
    }
    for (int i=1;i<=m;++i){
        cin >> t;
        for (int j=0;j<128;++j){
            if (table[j]==s[i]){
                table[j]=t;
            }
        }
    }
    for (int i=0;i<n;++i){
        p[i]=table[ p[i] ];
    }
    cout << p;
    return 0;
}
