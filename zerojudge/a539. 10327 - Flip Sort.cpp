#include<iostream>
using namespace std;

///n:幾個帶排序的整數,arr:數字,cnt:排序的次數
int main(){
    int n,arr[1000];
    while(cin >> n){
        for (int i=0;i<n;++i){
            cin >> arr[i];
        }
        int cnt=0;
        for (int i=1;i<n;++i){
            for (int j=0;j<n-1;++j){
                if (arr[j]>arr[j+1]){
                    int tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                    cnt+=1;
                }
            }
        }
        cout << "Minimum exchange operations : " << cnt << endl;
    }
    return 0;
}
