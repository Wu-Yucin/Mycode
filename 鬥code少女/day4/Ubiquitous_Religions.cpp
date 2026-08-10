#include<bits/stdc++.h>
using namespace std;

int parent[50000];

int finding(int child){
    if (parent[child]==child) return child;
    int root=parent[child];
    parent[child]=finding(root);
}

void add(int a,int b){
    parent[finding(b)]=finding(a);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,num=1;
    while (cin >> n){
        cin >> m;
        if (n==0 && m==0) break;

        for (int p=1;p<=n;++p){
            parent[p]=p;
        }

        int i,j;
        for (int p=0;p<m;++p){
            cin >> i >> j;
            add(i,j);
        }

        set<int> s;
        for (int i=1;i<=n;++i){
            s.insert(finding(i));
        }

        cout << "Case " << num << ": " << s.size() << "\n";

        num++;
    }
    return 0;
}
