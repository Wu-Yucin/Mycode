#include<iostream>
using namespace std;

///n:收服的寶可夢數量,c:遇到的寶可夢編號,s:第幾次收服這個寶可夢
int n,s=0;
char c,a;
int main(){
    cin >> n >> c;
    for (int i=1 ; i<=n ; ++i){
        ///a:收服過的寶可夢編號
        cin >> a;
        if (a==c){
            s +=1;
        }
    }
    s+=1;
    cout << s;
    return 0;
}
