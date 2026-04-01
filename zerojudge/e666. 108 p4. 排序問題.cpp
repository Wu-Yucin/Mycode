#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    string s;
    cin >> n >> m >> s;
    sort(s.begin(),s.end());
    for (int i=0;i<m;++i){
        cin >> k;
        cout << s[k-1];
    }
    return 0;
}
