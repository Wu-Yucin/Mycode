#include <iostream>
using namespace std;

///R:幾列,C:幾行
int main() {
    int R, C,grid[100][100];
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }
    int dx[8] = {-1,-1,-1, 0, 0, 1, 1, 1},dy[8] = {-1, 0, 1,-1, 1,-1, 0, 1},eliminated = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            bool hasSameNeighbor = false;
            for (int d = 0; d < 8; d++) {
                int ni = i + dx[d],nj = j + dy[d];
                if (ni < 0 || ni >= R || nj < 0 || nj >= C)
                    continue;
                if (grid[ni][nj] == grid[i][j]) {
                    hasSameNeighbor = true;
                    break;
                }
            }
            if (!hasSameNeighbor) {
                eliminated++;
            }
        }
    }
    cout << eliminated << endl;
    return 0;
}
