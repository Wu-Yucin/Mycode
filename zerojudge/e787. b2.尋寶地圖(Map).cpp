#include<iostream>
using namespace std;

///n:列,m:行,Map:藏寶圖,Map_t:轉換圖
int main(){
    int N, M,Map[100][100],Map_t[100][100];
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> Map[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> Map_t[i][j];
        }
    }
    int row[100] = {0},col[100] = {0};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            row[i] += Map_t[i][j];
        }
    }
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            col[j] += Map_t[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ( (row[i] + col[j] - Map_t[i][j]) % 2 == 1 ) {
                Map[i][j] = 1 - Map[i][j];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << Map[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
