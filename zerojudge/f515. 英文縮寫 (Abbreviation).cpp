#include<iostream>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        for(int i=0;i<(s.size());++i){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=char((s[i]-'a')+'A');
            }
        }
        if(s=="FOR"){
            cout << '4';
        }
        else if(s=="TO"){
            cout << '2';
        }
        else if(s=="AND"){
            cout << 'n';
        }
        else if(s=="YOU"){
            cout << 'u';
        }
        else{
            cout << s[0];
        }
    }
    return 0;
}
