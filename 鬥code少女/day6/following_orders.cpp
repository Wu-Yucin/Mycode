#include<bits/stdc++.h>
using namespace std;

vector<char> alpha,adj[26];
int deg[26];
bool visited[26];
string ans;

void dfs(){
    if (ans.size()==alpha.size()){
        cout << ans << "\n";
        return;
    }

    for (char c:alpha){
        if (!visited[c-'a'] && deg[c-'a']==0){
            ans+=c;
            visited[c-'a']=true;
            for (int i=0;i<adj[c-'a'].size();++i){
                deg[adj[c-'a'][i]-'a']--;
            }
            dfs();
            for (int i=0;i<adj[c-'a'].size();++i){
                deg[adj[c-'a'][i]-'a']++;
            }
            ans.pop_back();
            visited[c-'a']=false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string line1,line2;

    while (getline(cin,line1)){
        if (line1.empty()) break;
        getline(cin,line2);

        stringstream ss1(line1);
        stringstream ss2(line2);

        alpha.clear();
        ans.clear();
        for (int i=0;i<26;++i){
            adj[i].clear();
            deg[i]=-1;
            visited[i]=false;
        }

        char ch;
        while (ss1 >> ch){
            alpha.push_back(ch);
            deg[ch-'a']=0;
        }
        sort(alpha.begin(),alpha.end());

        char u,v;
        while (ss2 >> u >> v){
            adj[u-'a'].push_back(v);
            deg[v-'a']++;
        }

        dfs();
        cout << "\n";
    }
    return 0;
}
