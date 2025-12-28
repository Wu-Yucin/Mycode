#include <iostream>
using namespace std;

int main(){
    int jewel[102][102];
    int moves[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int m, n, k, r, c;
    cin >> m >> n >> k >> r >> c;
    r++;
    c++;
    for (int i=0;i<102;i++){
        for (int j=0;j<102;j++){
            jewel[i][j] = -1;
        }
    }
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            cin >> jewel[i][j];
        }
    }
    int dir = 0;
    int score = 0;
    int t = 0;
    while (true){
        bool endFlag = false;
        if (jewel[r][c] == 0)
            endFlag = true;
        int ok = 0;
        for (int i=0;i<4;i++){
            int nr = r + moves[i][0];
            int nc = c + moves[i][1];
            if (jewel[nr][nc] != -1)
                ok++;
        }
        if (ok == 0)
            endFlag = true;
        if (endFlag)
            break;
        score += jewel[r][c];
        t++;
        jewel[r][c]--;
        if (score % k == 0)
            dir = (dir + 1) % 4;
        int nr, nc;
        while (true){
            nr = r + moves[dir][0];
            nc = c + moves[dir][1];
            if (jewel[nr][nc] == -1)
                dir = (dir + 1) % 4;
            else
                break;
        }
        r = nr;
        c = nc;
    }
    cout << t;
    return 0;
}
