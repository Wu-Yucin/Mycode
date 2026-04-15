#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,arr[1000]={0};
    while(cin >> n){
        for (int i=0;i<n;++i){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for (int i=0;i<n;++i){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
