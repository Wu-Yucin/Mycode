#include<iostream>
using namespace std;

///s:初始等級,t:進化等級,a:總共所需的經驗值
int s,t,a=0;
int main(){
    cin >> s >> t;
    for (int i=s ; i<t ; ++i){
        a+=i*i;
    }
    cout << a;
    return 0;
}
