#include<iostream>
#include<cctype>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ///k:偏移量
    int k;
    string s;
    getline(cin,s);
    for (k=0;k<26;++k){
        string s2;
        for (int i=0;i<s.size();++i){
            if (isupper(s[i])){
                s2+=( (s[i]-'A'+k)%26+'A' );
            }
            else if (islower(s[i])){
                s2+=( (s[i]-'a'+k)%26+'a' );
            }
            else {
                s2+=s[i];
            }
        }
        if (s2.find("Love")!=s2.npos || s2.find("love")!=s2.npos){
            cout << k ;
            break;
        }
    }
    return 0;
}
