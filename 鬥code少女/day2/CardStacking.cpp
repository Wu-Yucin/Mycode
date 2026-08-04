#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,p,m=0;
    cin >> n >> k >> p;
    m=k/n;
    queue<int> card;
    for (int i=1;i<=k;++i){
        card.push(i);
    }
    vector<int> good;
    while (!card.empty()){
        for (int j=1;j<=n;++j){
            if (card.empty()) break;
            if (j==n) good.push_back(card.front());
            card.pop();
            int tmp;
            for (int a=0;a<p;++a){
                tmp=card.front();
                card.pop();
                card.push(tmp);
            }
        }
    }
    sort(good.begin(),good.end());
    for (int i=0;i<m;++i){
        cout << good[i] << "\n";
    }
    return 0;
}
