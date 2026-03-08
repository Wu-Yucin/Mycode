#include<iostream>
using namespace std;

///s:負二進位的數字,n:十進位的數字
int main(){
    string s;
    while(cin >> s){
        int n=0;
        for (int i=0;i<s.size();++i){
            int t=s[s.size()-1-i]-'0';
            for (int j=0;j<i;++j){
                t*=(-2);
            }
            n+=t;
        }
        cout << n << endl;
    }
    return 0;
}
