#include<bits/stdc++.h>
using namespace std;

vector<int> relation[101];
int max_length[101],ending[101],length=0;

void dfs(int u){
    if (max_length[u]!=-1) return;

    max_length[u]=0;
    ending[u]=u;

    for (auto v:relation[u]){
        dfs(v);
        length=max_length[v]+1;

        if (length>max_length[u]){
            max_length[u]=length;
            ending[u]=ending[v];
        }
        else if (length==max_length[u]){
            ending[u]=min(ending[u],ending[v]);
        }

    }


}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,p,q,times=1,start;
    while (cin >> n && n!=0){
        for (int i=1;i<=n;++i){
            relation[i].clear();
            max_length[i]=-1;
            ending[i]=-1;
        }
        cin >> start;
        while (cin >> p >> q && p!=0 && q!=0){
            relation[p].push_back(q);
        }

        dfs(start);

        cout << "Case " << times <<
        ": The longest path from " << start <<
         " has length " << max_length[start] <<
          ", finishing at " << ending[start] << ".\n\n";

        times++;
    }
    return 0;
}
