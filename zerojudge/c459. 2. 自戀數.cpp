#include<iostream>
using namespace std;

///b:幾進位制,n:正整數,q:正整數為幾位數
int main(){
    int b,n,q=0;
    cin >> b >> n;
    ///i:計算位數,j:臨時n
    int i=1,j=n;
    while ( j/10 != 0 ){
        j/=10;
        ++i;
    }
    q=i;
    ///m:question
    int m=0;
    if (b!=10){
        int j=n,o=0;
        while ((j/10)!=0 || (j%10)!=0){
            ///g:計算進位制
            int g=1;
            for (int y=0;y<o;++y){
                g*=b;
            }
            m+=(j%10*g);
            ++o;
            j/=10;
        }
    }
    else m=n;
    ///ans:answer,c:計算自戀數
    int ans=0;
    while ((n/10)!=0 || (n%10)!=0){
        int c=1;
        for (int i=0;i<q;++i){
            c*=(n%10);
        }
        ans+=c;
        n/=10;
    }
    if (ans == m){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
