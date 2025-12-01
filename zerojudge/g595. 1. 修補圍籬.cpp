#include<iostream>
using namespace std;

///n:圍籬數量,h:圍籬高度,s:新增圍籬高度
int main(){
    int n,h[100]={0},s=0;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> h[i];
    }
    for (int i=0;i<n;++i){
        if (h[i]==0){
            if (i==0){
                s+=h[i+1];
            }
            else if (i==n-1){
                s+=h[i-1];
            }
            else if (h[i-1]<h[i+1]){
                s+=h[i-1];
            }
            else{
                s+=h[i+1];
            }
        }
    }
    cout << s;
    return 0;
}
