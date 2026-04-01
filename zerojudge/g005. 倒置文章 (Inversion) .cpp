#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,ans,test;
    cin >> s;
    int k=0;
    bool w=false;
    s=s+"+";
    for (int i=0;i<s.size();++i){
        if (s[i]=='+' || s[i]=='-'){
            string word=s.substr(k,i-k);
            if (w){
                for (int j=word.size()-1;j>=0;--j){
                    test+=word[j];
                }
                ans+=test;
            }
            else ans+=word;
            k=i+1;
            if (s[i]=='-'){
                w=true;
            }
            else w=false;
            test="";
        }
    }
    cout << ans;
    return 0;
}
