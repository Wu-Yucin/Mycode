#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long ugly_number[1500]={0},j=0;
    priority_queue<long long,vector<long long>,greater<long long> > pd;
    pd.push(1);
    while (true){
        bool yes=false;
        for (int i=0;i<1500;++i){
            if (ugly_number[i]==0) break;
            if (pd.top()==ugly_number[i]){
                pd.pop();
                yes=true;
                break;
            }
        }
        if (yes) continue;
        ugly_number[j]=pd.top();
        pd.pop();
        pd.push(ugly_number[j]*2);
        pd.push(ugly_number[j]*3);
        pd.push(ugly_number[j]*5);
        ++j;
        if (j==1500) break;
    }
    cout << "The 1500'th ugly number is " << ugly_number[1499] << ".";
    return 0;
}
