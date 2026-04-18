#include<iostream>
using namespace std;

string math(string x,string m){
    if (x.size() > m.size()){
        m=x;
    }
    else if (x.size() == m.size()){
        for (int i=0;i<x.size();++i){
            if (x[i]>m[i]){
                m=x;
                break;
            }
            else if (x[i]<m[i]){
                break;
            }
        }
    }
    return m;
}

int main(){
    int n;
    string a,b,c;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> a >> b >> c;
        string mx="";
        mx=math(a,mx);
        mx=math(b,mx);
        mx=math(c,mx);
        cout << mx << endl;
    }
    return 0;
}
