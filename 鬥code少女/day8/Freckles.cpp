#include<bits/stdc++.h>
using namespace std;

struct st{
    int id;
    double weight;

    bool operator<(const st& other) const{
        return weight>other.weight;
    }
};

vector<st> adj[100];
bool visited[100];
int m,n;
double x[100],y[100];

void add(double a,double b,int j){
    for (int i=0;i<n;++i){
        if (i==j) continue;
        double tmp=sqrt( (a-x[i])*(a-x[i])+(b-y[i])*(b-y[i]) );
        adj[j].push_back({i,tmp});
    }
    return;
}

double prim(int j){
    priority_queue<st> pq;
    double min_weight=0;
    int point_count=0;

    pq.push({j,0});

    while (!pq.empty()){
        st tmp=pq.top();
        pq.pop();

        if (!visited[tmp.id]){
            visited[tmp.id]=true;
            min_weight+=tmp.weight;
            point_count++;

            for (auto u:adj[tmp.id]){
                pq.push(u);
            }
        }
    }

    if (point_count!=n) return -1;
    return min_weight;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> m;

    for (int i=0;i<m;++i){

        for (int j=0;j<100;++j){
            visited[j]=false;
            adj[j].clear();
        }

        cin >> n;
        for (int j=0;j<n;++j){
            cin >> x[j] >> y[j];
        }
        for (int j=0;j<n;++j){
            add(x[j],y[j],j);
        }

        cout << fixed << setprecision(2) << prim(0);
        cout << "\n\n";
    }
    return 0;
}
