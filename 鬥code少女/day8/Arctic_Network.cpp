#include<bits/stdc++.h>
using namespace std;

struct st{
    int id;
    double weight;

    bool operator>(const st& other) const{
        return weight>other.weight;
    }
};

vector<st> adj[500];
bool visited[500];
int s,p,x[500],y[500];

void add(int sx,int sy,int j){
    for (int i=0;i<p;++i){
        if (i==j) continue;
        double tmp=sqrt( (sx-x[i])*(sx-x[i])+(sy-y[i])*(sy-y[i]) );
        adj[j].push_back({i,tmp});
    }
}

double prim(int j){
    priority_queue<st> pq;
    double min_weight=0;
    int point_count=0;

    pq.push({j,0});

    while (!pq.empty()){
        st tmp=pq.top();
        pq.pop();
        min_weight+=tmp.weight;
        point_count++;

        for (int i=0;i<adj[tmp.id];++i){
            pq.push();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i=0;i<n;++i){
        for (int j=0;j<500;++j){
            adj[j].clear();
            visited[j]=false;
        }
        cin >> s >> p;
        for (int j=0;j<p;++j){
            cin >> x[j] >> y[j];
        }
        for (int j=0;j<p;++j){
            add(x[j],y[j],j);
        }

        cout << fixed << setprecision(2) << prim(0) << "\n";
    }
    return 0;
}
