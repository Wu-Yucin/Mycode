#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n;
    long long money=0;
    string a,b,c,num;
    cin >> k >> n;
    cin >> a >> b >> c;
    for (int i=0;i<n;++i){
        cin >> num;
        int x=0,y=0,z=0;
        for (int j=k-1;j>=0;--j){
            if (a[j]==num[j]){
                x++;
            }
            else break;
        }
        for (int j=k-1;j>=0;--j){
            if (b[j]==num[j]){
                y++;
            }
            else break;
        }
        for (int j=k-1;j>=0;--j){
            if (c[j]==num[j]){
                z++;
            }
            else break;
        }
        int mx=0;
        if (x>mx){
            mx=x;
        }
        if (y>mx){
            mx=y;
        }
        if (z>mx){
            mx=z;
        }
        if (mx==(k)){
            money+=500000;
        }
        else if (mx>=(k-2)){
            money+=10000;
        }
        else if (mx>=(k-4)){
            money+=1000;
        }
        else if (mx>=(3)){
            money+=300;
        }
    }
    cout << money;
    return 0;
}
