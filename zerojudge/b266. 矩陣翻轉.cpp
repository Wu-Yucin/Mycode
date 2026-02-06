#include<iostream>
using namespace std;

///r:行數,c:每一行幾個正整數,m:幾個操作,b:矩陣
int main(){
    int r,c,m;
    while(cin >> r >> c >> m){
        int b[10][10]={0};
        for (int i=0;i<r;++i){
            for (int j=0;j<c;++j){
                cin >> b[i][j];
            }
        }
        int l[10];
        for (int i=0;i<m;++i){
            cin >> l[i];
        }
        ///work:操作
        for (int i=m-1;i>=0;--i){
            int work=l[i];
            if (work == 0){
                int t[10][10]={0};
                for (int i=0;i<r;++i){
                    for (int j=0;j<c;++j){
                        t[c-1-j][i]=b[i][j];
                    }
                }
                int o=r;
                r=c;
                c=o;
                for (int i=0;i<r;++i){
                    for (int j=0;j<c;++j){
                        b[i][j]=t[i][j];
                    }
                }
            }
            else{
                for (int i=0;i<(r/2);++i){
                    for (int j=0;j<c;++j){
                        int q=b[i][j];
                        b[i][j]=b[r-1-i][j];
                        b[r-1-i][j]=q;
                    }
                }
            }
        }
        cout << r << " " << c << endl;
        for (int i=0;i<r;++i){
            for (int j=0;j<c;++j){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

