    #include<bits/stdc++.h>
    using namespace std;

///n1,n2:正整數數量,p:次方數,c:係數,a:答案
int main(){
    int n1,p,c,n2,a[1001]={0};
    cin >> n1;
    for (int i=0;i<n1;++i){
        cin >> p >> c;
        a[p]+=c;
    }
    cin >> n2;
    for (int i=0;i<n2;++i){
        cin >> p >> c;
        a[p]+=c;
    }
    bool n=true;
    for (int i=1000;i>=0;--i){
        if (a[i]!=0){
            cout << i << ":" << a[i] << endl;
            n=false;
        }
    }
    if (n){
        cout << "NULL!";
    }
    return 0;
}
