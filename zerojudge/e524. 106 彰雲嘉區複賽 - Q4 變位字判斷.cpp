#include<iostream>
#include<cctype>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string a,b;
    cin >> n;
    getline(cin,a);
    for (int i=0;i<n;++i){
        getline(cin,a);
        getline(cin,b);
        string p="",q="";
        for (int j=0;j<a.size();++j){
            if (isalpha(a[j])!=0){
                p+=tolower(a[j]);
            }
        }
        for (int k=0;k<b.size();++k){
            if (isalpha(b[k])!=0){
                q+=tolower(b[k]);
            }
        }
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        if (p==q){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}
