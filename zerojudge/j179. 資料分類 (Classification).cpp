#include<iostream>
using namespace std;

string two(string z){
    return to_string( (z[1]-'0')*(z[0]-'0') );
}

string three(string y){
    return to_string( (y[1]-'0')*(y[0]-'0') )+to_string( (y[2]-'0')*(y[1]-'0') );
}

string four(string x){
    if (x[2]=='0'){
        return two(x.substr(0,2))+x[3];
    }
    else return two(x.substr(0,2))+two(x.substr(2,2));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin >> n;
    while(n.size()!=1){
        if (n[0]=='0'){
            n=n.substr(1,n.size()-1);
        }
        if (n.size()==4){
            n=four(n);
        }
        else if (n.size()==3){
            n=three(n);
        }
        else if (n.size()==2){
            n=two(n);
        }
    }
    cout << n;
    return 0;
}
