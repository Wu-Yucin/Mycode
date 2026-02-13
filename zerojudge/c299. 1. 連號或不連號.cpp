#include<iostream>
using namespace std;

///n:序列長度,s:序列
int main(){
    int n,s[100]={0};
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> s[i];
    }
    for (int i=1;i<n;++i){
        for (int j=0;j<n-1;++j){
            if (s[j]>s[j+1]){
                int tmp=s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
            }
        }
    }
    bool yes=true;
    for (int i=1;i<n;++i){
        if (s[i]!=s[i-1]+1){
            yes=false;
            break;
        }
    }
    cout << s[0] << " " << s[n-1] << " ";
    if (yes){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}
