#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q,s[1000001]={0},f[1000001]={0},a=1;
    while (a>0){
        cin >> n >> q;
        if (n==0 && q==0) break;
        for (int i=0;i<n;++i){
            cin >> s[i];
        }
        for (int i=0;i<q;++i){
            cin >> f[i];
        }

        for (int i=1;i<n;++i){
            for (int j=i-1;j>=0;--j){
                if (s[j]>s[j+1]){
                    int tmp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=tmp;
                }
            }
        }

        cout << "CASE# " << a << ":" << "\n";

        for (int i=0;i<q;++i){
            bool yes=false;
            for (int j=0;j<n;++j){
                if (s[j]==f[i]){
                    yes=true;
                    cout << f[i] << " found at " << j+1 << "\n";
                    break;
                }
            }
            if (!yes) cout << f[i] << " not found" << "\n";
        }

        a++;
    }
    return 0;
}
