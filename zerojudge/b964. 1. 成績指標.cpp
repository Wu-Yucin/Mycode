#include<iostream>
using namespace std;

///n:學生人數,low:最低不及格分數,high:最高及格分數,a:每個學生的分數
int main(){
    int n,low=0,high=100,a[20];
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> a[i];
    }
    for (int i=0;i<n-1;++i){
        for (int j=0;j<(n-1-i);++j){
            if (a[j]>a[j+1]){
                int y=a[j];
                a[j]=a[j+1];
                a[j+1]=y;
            }
        }
    }
    for (int i=0;i<n;++i){
        cout << a[i] << " ";
    }
    cout << endl;
    bool c=false,d=false;
    for (int i=0;i<n;++i){
        if (a[i]>=60){
            low=a[i];
            d=true;
            break;
        }
    }
    for (int i=n-1;i>=0;--i){
        if (a[i]<60){
            high=a[i];
            c=true;
            break;
        }
    }
    if (c==false){
        cout << "best case" << endl;
    }
    else cout << high << endl;
    if (d==false){
        cout << "worst case";
    }
    else cout << low;
    return 0;
}
