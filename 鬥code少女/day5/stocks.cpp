#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,a[200000],place[200000];
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater< pair<int,int> > > pd;
    cin >> n >> k;
    for (int i=0;i<n;++i){
        place[i]=-1;
    }
    for (int i=0;i<n;++i){
        cin >> a[i];
        if (!pd.empty()){
            while (true){
                pair<int,int> tmp=pd.top();
                if (a[i]>=tmp.first+k){
                    place[tmp.second]=i+1;
                    pd.pop();
                }
                else break;
            }
        }
        pd.push({a[i],i});
    }

    for (int i=0;i<n;++i){
        cout << place[i] << " ";
    }
    return 0;
}
