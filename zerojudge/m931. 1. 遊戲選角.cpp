#include<iostream>
using namespace std;

///n:角色數,a:攻擊力,d:防禦力,ability:能力值
int main(){
    int n,a[21],d[21],ability[21]={0};
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> a[i] >> d[i];
        ability[i]=(a[i]*a[i]+d[i]*d[i]);
    }
    for (int i=0;i<n;++i){
        for (int j=i-1;j>=0;--j){
            if (ability[j]<ability[j+1]){
                int tmp=ability[j];
                ability[j]=ability[j+1];
                ability[j+1]=tmp;
            }
            else break;
        }
    }
    for (int i=0;i<n;++i){
        if ( (a[i]*a[i]+d[i]*d[i]) == ability[1]){
            cout << a[i] << " " << d[i];
            break;
        }
    }
    return 0;
}
