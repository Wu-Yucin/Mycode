#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> circle[100];
int ans[100][100];

int maxsum(int y,int x){
    if (ans[y][x]!=-1) return ans[y][x];

    if (ans[y+1][x]==-1) maxsum(y+1,x);
    if (ans[y+1][x+1]==-1) maxsum(y+1,x+1);
    if (ans[y+1][x]>ans[y+1][x+1]){
        return ans[y][x]=ans[y+1][x]+circle[y][x];
    }
    else{
        return ans[y][x]=ans[y+1][x+1]+circle[y][x];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int tmp;
    for (int i=0;i<n;++i){
        for (int j=1;j<=i+1;++j){
            cin >> tmp;
            circle[i].push_back(tmp);
        }
    }

    for (int i=0;i<100;++i){
        for (int j=0;j<100;++j){
            ans[i][j]=-1;
        }
    }

    for (int j=0;j<circle[n-1].size();++j){
        ans[n-1][j]=circle[n-1][j];
    }
    cout << maxsum(0,0);
    return 0;
}
