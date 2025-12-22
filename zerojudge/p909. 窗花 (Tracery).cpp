#include<iostream>
using namespace std;

///w:寬,h:高
int main(){
    int w,h;
    bool a[1000][1000];
    cin >> w >> h;
    for (int i=0;i<h;++i){
        for (int j=0;j<w;++j){
            cin >> a[i][j];
        }
    }
    for (int i=0;i<h;++i){
        for (int j=0;j<w;++j){
            cout << a[i][j] << " ";
        }
        for (int j=w-1;j>=0;--j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i=h-1;i>=0;--i){
        for (int j=0;j<w;++j){
            cout << a[i][j] << " ";
        }
        for (int j=w-1;j>=0;--j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
