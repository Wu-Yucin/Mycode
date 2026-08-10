#include<bits/stdc++.h>
using namespace std;

long long n,r,rt[200000]={0},ans=0,total=0;

bool isreturn(long long a){
    for (int i=0;i<n;++i){
        if (a<=0) return true;
        if (a>total) return false;
        bool tmp=false;
        if (a%r!=0) tmp=true;
        if (tmp) a=a+(a/r)+1-rt[i];
        else a=a+(a/r)-rt[i];
    }
    if (a<=0) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> r;
    long long left=0,right=0,mid=0;
    for (int i=0;i<n;++i){
        cin >> rt[i];
        total+=rt[i];
    }
    right=total;
    while (left<=right){
        mid=(right+left)/2;

        if (isreturn(mid)){
            ans=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    cout << ans;
    return 0;
}
