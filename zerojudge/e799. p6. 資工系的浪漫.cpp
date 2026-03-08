#include<iostream>
using namespace std;

///n:高,m:寬,c:二進位中1的輸出,s:十進位數字
int main(){
    long long n, m, s;
    char c;
    cin >> n >> m >> c;
    for (int i = 0; i < n; ++i){
        cin >> s;
        char board[100];
        for (int j = 0; j < m; ++j) {
            board[j] = '.';
        }
        int p = m - 1;
        while (s > 0 && p >= 0) {
            if (s % 2 == 1) {
                board[p] = c;
            }
            s /= 2;
            p--;
        }
        for (int j = 0; j < m; ++j) {
            cout << board[j] << " ";
        }
        cout << endl;
    }
    return 0;
}

