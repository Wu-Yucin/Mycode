#include<bits/stdc++.h>
using namespace std;

int parent[1000000]={0};

int finding(int a){
    if (parent[a]==a) return a;
    int root=finding(parent[a]);
    parent[a]=root;
    return root;
}

void connet(int i,int j){
    if (parent[i]==0) parent[i]=i;
    if (parent[j]==0) parent[j]=j;

    parent[finding(j)]=finding(i);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m;
    cin >> m;
    cin.ignore();
    cin.ignore();
    for (int i=0;i<m;++i){
        int cpt,cpt_i,cpt_j,correct=0,wrong=0;
        string s;
        char conmand;
        cin >> cpt;
        cin.ignore();
        for (int p=1;p<=cpt;++p) parent[p]=p;
        while (getline(cin,s) && s!=""){
            stringstream ss(s);
            ss >> conmand >> cpt_i >> cpt_j;
            if (conmand=='c'){
                connet(cpt_i,cpt_j);
            }
            else{
                if (finding(cpt_i)==finding(cpt_j)) correct++;
                else wrong++;
            }
        }
        cout << correct << "," << wrong << "\n\n";
    }
    return 0;
}
