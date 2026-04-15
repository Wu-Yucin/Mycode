#include<iostream>
#include<algorithm>
using namespace std;

long long num[2000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long r;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> r;
        for (int j=0;j<r;++j){
            cin >> num[j];
        }
        sort(num,num+r);
        int middle=(r-1)/2;
        long long d=0,tem=0;
        for (int j=0;j<r;++j){
            if (j<middle){
                tem=num[middle]-num[j];
            }
            else tem=num[j]-num[middle];
            d+=tem;
        }
        cout << d  << " " << num[middle] << endl;
    }
    return 0;
}
