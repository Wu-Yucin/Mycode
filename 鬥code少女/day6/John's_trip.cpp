#include<bits/stdc++.h>
using namespace std;

struct graph{
    int path;
    int point;

    bool operator<(graph& other) const{
        return path<other.path;
    }
};

vector<graph> road[50];
int deg[50];
bool visited[1995];
vector<int> ans;

void dfs(int o){
    for (int i=0;i<road[o].size();++i){
        int id=road[o][i].path;
        int next=road[o][i].point;
        if (!visited[id]){
            visited[id]=true;
            dfs(next);
            ans.push_back(id);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x,y,z;

    while (cin >> x >> y){
        if (x==0 && y==0) break;
        cin >> z;
        for (int i=0;i<50;++i){
            deg[i]=0;
            road[i].clear();
        }
        ans.clear();
        for (int i=0;i<1995;++i){
            visited[i]=false;
        }
        int total=1;

        deg[x]++;
        deg[y]++;
        road[x].push_back({z,y});
        road[y].push_back({z,x});
        int st=min(x,y);

        while (cin >> x >> y){
            if (x==0 && y==0) break;
            cin >> z;
            deg[x]++;
            deg[y]++;
            road[x].push_back({z,y});
            road[y].push_back({z,x});
            total++;
        }

            bool yes=true;
            for (int i=0;i<44;++i){
                if (deg[i] % 2 != 0){
                    yes = false;
                    break;
                }
            }
            if (!yes){
                cout << "Round trip does not exist.\n\n";
                continue;
            }

            for (int i=0;i<44;++i){
                sort(road[i].begin(),road[i].end());
            }

            dfs(st);

            if (ans.size()!=total){
                cout << "Round trip does not exist.\n\n";
                continue;
            }

            reverse(ans.begin(),ans.end());
            for (int i=0;i<ans.size();++i){
                cout << ans[i] << " ";
            }
            cout << "\n\n";
        }
    return 0;
}
