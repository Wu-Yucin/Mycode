#include<iostream>
using namespace std;

//n:電梯的升降次數,h:現在的樓層,x:電梯停留的樓層,e:電梯升降的耗電量
int n,h=1,x,e=0;
int main(){
    cin >> n;
    for (int i=1;i<=n;++i){
        cin >> x;
        if (x>=h){
            e += (x-h)*3;
        }
        else{
            e += (h-x)*2;
        }
        h=x;
    }
    cout << e;
    return 0;
}
