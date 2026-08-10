#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i=0;i<n;++i){
        int p,d;
        cin >> p >> d;
        vector<int> connect[p];
        int num[p]={0};
        int a,b;
        for (int j=0;j<d;++j){
            cin >> a >> b;
            connect[a].push_back(b);
            connect[b].push_back(a);
        }

        bool visited[1000]={false};
        queue<int> q;
        q.push(0);
        visited[0]=true;
        while (!q.empty()){
            int node=q.front();
            q.pop();
            for (int j=0;j<connect[node].size();++j){
                if (!visited[connect[node][j]]){
                    num[connect[node][j]]=num[ node ]+1;
                    visited[connect[node][j]]=true;
                    q.push(connect[node][j]);
                }
            }
        }
        for (int j=1;j<p;++j){
            cout << num[j] << "\n";
        }
        cout << "\n";
    }
    return 0;
}
