#include<iostream>
using namespace std;

///m:對手屬性,
int m;
int main(){
    cin >> m;
    if (m==1){
        cout << "2 8 9";
    }
    else if (m==2){
        cout << "3 4";
    }
    else if(m==3){
        cout << "1 5 6 7";
    }
    else if(m==4){
        cout << "9";
    }
    else if (m==5){
        cout << "1 6 8";
    }
    else if (m==6){
        cout << "4 7 8";
    }
    else if (m==7){
        cout << "1 8";
    }
    else if (m==8){
        cout << "2 3 9";
    }
    else{
        cout << "2 3 7";
    }
    return 0;
}
