#include<iostream>
using namespace std;

///n:列,m:行,Map:藏寶圖,Map_t:轉換圖
int main(){
    int n,m,Map[100][100],Map_t[100][100];
    cin >> n >> m;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin >> Map[i][j];
        }
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin >> Map_t[i][j];
        }
    }
    int sum=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            sum+=Map_t[i][j];
        }
        if (sum%2 != 0){
            for (int j=0;j<m;++j){
                if(Map[i][j]==1){
                    Map[i][j]=0;
                }
                else Map[i][j]=1;
            }
        }
        sum=0;
    }
    for (int j=0;j<m;++j){
        for (int i=0;i<n;++i){
            sum+=Map_t[i][j];
        }
        if (sum%2 != 0){
            for (int i=0;i<n;++i){
                if(Map[i][j]==1){
                    Map[i][j]=0;
                }
                else Map[i][j]=1;
            }
        }
        sum=0;
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cout << Map[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
