#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while (cin >> s){
        list<char> c;
        auto it = c.begin();
        for (int i=0;i<s.size();++i){
            if (s[i]=='[') it=c.begin();
            else if (s[i]==']') it=c.end();
            else{
                it=c.insert(it,s[i]);
                it++;
            }
        }
        auto print_it = c.begin();
        for (int i = 0; i < c.size(); ++i) {
            cout << *print_it;
            print_it++;
        }
        cout << "\n";
    }
    return 0;
}
