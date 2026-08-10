#include<bits/stdc++.h>
using namespace std;

bool graph[6][6];
bool used[6][6]={false};
vector<int> path;

void add(int a,int b){
    graph[a][b]=true;
    graph[b][a]=true;
}

void findgraph(int start,int step){
    if (step==8){
        for (int j=0;j<path.size();++j){
            cout << path[j];
        }
        cout << "\n";
        return;
    }

    for (int i=1;i<=5;++i){
        if (graph[start][i] && !used[start][i]){
            used[start][i]=true;
            used[i][start]=true;
            path.push_back(i);
            findgraph(i,step+1);
            path.pop_back();
            used[start][i]=false;
            used[i][start]=false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    add(1,2);
    add(1,3);
    add(1,5);
    add(2,5);
    add(2,3);
    add(3,5);
    add(3,4);
    add(4,5);
    path.push_back(1);
    findgraph(1,0);
    return 0;
}
