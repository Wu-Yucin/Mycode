#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int l,d,i;
    cin >> l;
    for (int j=0;j<l;++j){
        cin >> d >> i;
        int now=1;
        for (int k=1;k<d;++k){
            if (i%2==0){
                i/=2;
                now=now*2+1;
            }
            else{
                i=(i+1)/2;
                now*=2;
            }
        }
        cout << now << "\n";
    }
    cin >> l;
    return 0;
}
