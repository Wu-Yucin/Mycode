#include<iostream>
using namespace std;

int main(){
    string n;
    cin >> n;
    int a=0,b=0;
    for (int i=0;i<n.size();++i){
        if ((i+1)%2!=0){
            a+=n[i]-'0';
        }
        else {
            b+=n[i]-'0' ;
        }
    }
    int y;
    if (a>b){
        y=a-b;
    }
    else y=b-a;
    cout << y << endl;
    return 0;
}
