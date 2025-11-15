#include<iostream>
using namespace std;

///n:一大於2的偶數,a,b:第一組質數和分解的兩質數
int n,a,b;
bool s;
int main(){
    cin >> n;
    for (int i=2 ; i<n ; ++i){
        s = true;
        for (int j=2 ; j<i ; ++j){
            if (i%j == 0){
                s=false;
                break;
            }
        }
        if (s==true){
            for (int t=2 ; t < (n-i) ; ++t){
                if ((n-i)%t == 0){
                    s=false;
                    break;
                }
            }
            if ((s==true) && (n-i) != 1){
                a = i;
                b = n-i;
                break;
            }
        }
    }
    if (a < b){
        cout << n << " = " << a << " + " << b;
    }
    else{
        cout << n << " = " << b << " + " << a;
    }
    return 0;
}
