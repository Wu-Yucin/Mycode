#include<bits/stdc++.h>
using namespace std;

//n:正整數,is_prime:是否為質數
int n;
bool is_prime=true;
int main(){
    cin >> n;
    for(int i=n+1 ; ; ++i){
        is_prime=true;
        for (int j=2 ; j<=sqrt(i) ; ++j){
            if ( i%j == 0){
                is_prime = false;
                break;
            }
        }
        if (is_prime && i!=1){
            cout << i << " ";
            break;
        }
    }
   for (int q = n + 1;; ++q) {
        int root = sqrt(q);
        if (root * root == q) {
            cout << q << " ";
            break;
        }
    }
    for (int w = n + 1;; ++w) {
        int cube = cbrt(w);
        if (cube * cube * cube == w) {
            cout << w << endl;
            break;
        }
    }
    return 0;
}
