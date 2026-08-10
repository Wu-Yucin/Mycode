#include<bits/stdc++.h>
using namespace std;

int n,line[100001],start=0,ending=0;

int maxsum(int m){

    return mx;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=1;i<=t;++i){
        cin >> n;
        for (int j=0;j<n;++j){
            cin >> line[j];
            if (max_sum+line[j]>max_sum){
                max_sum+=line[j];
                start=j+1;
            }
        }

        int max_sum=0,s=0,e=0;
        for (int j=0;j<n;++j){
            int tmp=maxsum(j);
            if (tmp>max_sum){
                max_sum=tmp;
                s=start;
                e=ending;
            }
        }
        int mx=0;
        start=m+1;
        int now=0;
        for (int i=0;i<=100000;++i){
            now+=line[i];
            if (now>mx){
                mx=now;
                ending=i+1;
            }
        }
        cout << "Case " << i << ":\n" << max_sum
        << " " << s << " " << e << "\n\n";
    }
    return 0;
}
