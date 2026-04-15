#include<iostream>
using namespace std;

int main(){
    int n,s,file[100]={0};
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> s;
        s%=1000;
        file[s/10]+=1;
    }
    for (int i=0;i<100;++i){
        if (file[i]!=0){
            cout << i << " " << file[i] << endl;
        }
    }
    return 0;
}
