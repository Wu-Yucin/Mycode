#include<bits/stdc++.h>
using namespace std;

//a,b:正整數;is_prime:是否是質數;n:幾個質數
int a,b,n=0;
bool is_prime = true;
int main(){
    while(cin >> a >> b){
        for (int i=a ; i<=b ; ++i){
            for (int j=2 ; j<=sqrt(i) ; ++j){
                if (i%j==0){
                    is_prime=false;
                    break;
                }
            }
            if (is_prime && i!=1){
                    n+=1;
                }
            }
        cout << n << endl;
    }
    return 0;
}
