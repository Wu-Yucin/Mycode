#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,a;
    cin >> n >> m;
    priority_queue<int> pd;
    for (int i=0;i<n;++i){
        cin >> a;
        pd.push(a);
    }
    for (int i=0;i<m;++i){
        int tmp=pd.top();
        pd.pop();
        if (tmp%2!=0){
            pd.push(tmp/2+1);
            pd.push(tmp/2+1);
        }
        else{
            pd.push(tmp/2);
            pd.push(tmp/2);
        }
    }
    cout << pd.top();
    return 0;
}
