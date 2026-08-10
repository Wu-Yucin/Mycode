#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i=0;i<n;++i){
        string s;
        stack<char> c;
        cin >> s;
        for (int j=0;j<s.size();++j){
            if (!c.empty() && s[j]==')' && c.top()=='('){
                c.pop();
                continue;
            }
            else if (!c.empty() && s[j]==']' && c.top()=='['){
                c.pop();
                continue;
            }
            c.push(s[j]);
        }

        if (c.empty()) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
