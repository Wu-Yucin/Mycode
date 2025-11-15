#include<iostream>
using namespace std;

///m:每一次開始的金額,sum:總支出,now:現在累積金額,s:受訪者的選擇
int m,sum=0,now;
string s;
int main(){
    cin >> m;
    now = m;
    while (cin >> s){
        if (s == "Stop"){
            break;
        }
        if (s == "Double"){
            now *= 2;
        }
        else{
            sum += now;
            now = m;
        }
    }
    cout << sum;
    return 0;
}
