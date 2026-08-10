#include<bits/stdc++.h>
using namespace std;

int m,n,ans=0;
bool visited[100][100];
char c[100][100]={0};

int dx[8]={-1,0,1,-1,1,-1,0,1};
int dy[8]={-1,-1,-1,0,0,1,1,1};

void dfs(int p,int q){
    for (int i=0;i<8;++i){
        int x=q+dx[i];
        int y=p+dy[i];

        if (x<0 || x>=n) continue;
        if (y<0 || y>=m) continue;

        if (c[y][x]=='@' && !visited[y][x]){
            visited[y][x]=true;
            dfs(y,x);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> m){
        cin >> n;
        if (m==0) break;
        ans=0;

        for (int i=0;i<100;++i){
            for (int j=0;j<100;++j){
                visited[i][j]=false;
            }
        }

        for (int i=0;i<m;++i){
            for (int j=0;j<n;++j){
                cin >> c[i][j];
            }
        }

        for (int i=0;i<m;++i){
            for (int j=0;j<n;++j){
                if (c[i][j]=='@' & !visited[i][j]){
                    ans++;
                    dfs(i,j);
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
