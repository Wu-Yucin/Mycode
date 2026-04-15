#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,r;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> r;
        int num[500]={0};
        for (int j=0;j<r;++j){
            cin >> num[j];
        }
        sort(num,num+r);
        int middle=r/2,d=0,tem=0;
        for (int j=0;j<r;++j){
            if (j<middle){
                tem=num[middle]-num[j];
            }
            else tem=num[j]-num[middle];
            d+=tem;
        }
        cout << d << endl;
    }
    return 0;
}
