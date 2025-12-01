#include<iostream>
using namespace std;

///n:題數,s:每題分數,m:學生個數,a:正確答案,x:學生答案,score:學生分數
int main(){
    int n,s,m,a[20],x;
    cin >> n >> s;
    for (int i=0;i<n;++i){
        cin >> a[i];
    }
    cin >> m;
    for (int i=0;i<m;++i){
        int score=0;
        for (int j=0;j<n;++j){
            cin >> x;
            if (x==a[j]){
                score+=s;
            }
        }
        cout << score << endl;
    }
    return 0;
}
