#include<iostream>
using namespace std;

///n:借幾本書,s:書的編號,d:借閱天數,book:逾期的書編號,money:總罰款
int main(){
    int n,s,d,book[2000]={0},money=0;
    cin >> n;
    int f=0;
    for (int i=0;i<n;++i){
        cin >> s >> d;
        if (d>100){
            book[f]=s;
            f++;
            money+=(d-100)*5;
        }
    }
    for (int i=0;i<f;++i){
        for (int j=i-1;j>=0;--j){
            if (book[j]>book[j+1]){
                int tmp=book[j];
                book[j]=book[j+1];
                book[j+1]=tmp;
            }
            else break;
        }
    }
    if (money>0){
    for (int i=0;i<f;++i){
        cout << book[i] << " ";
    }
    }
    cout << endl;
    cout << money;
    return 0;
}
