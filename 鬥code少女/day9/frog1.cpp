#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> h;
vector<long long> ans;

long long cost(int place){
    if (place==1) return ans[1];
    if (place==2) return ans[2];
    if (ans[place]!=-1) return ans[place];

    if (ans[place-1]==-1) cost(place-1);
    if (ans[place-2]==-1) cost(place-2);

    if ( (ans[place-1]+abs(h[place]-h[place-1])) > (ans[place-2]+abs(h[place]-h[place-2])) ){
        return ans[place]=ans[place-2]+abs(h[place]-h[place-2]);
    }
    else{
        return ans[place]=ans[place-1]+abs(h[place]-h[place-1]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int tmp;
    h.push_back(-1);
    for (int i=1;i<=n;++i){
        cin >> tmp;
        h.push_back(tmp);
    }
    ans.resize(n+1);
    for (int i=1;i<=n;++i){
        ans[i]=-1;
    }

    ans[1]=0;
    ans[2]=abs(h[2]-h[1]);
    cout << cost(n);
    return 0;
}
