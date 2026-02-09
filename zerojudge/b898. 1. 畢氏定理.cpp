#include<iostream>
using namespace std;

///n:幾個測資,a:三邊長,m:max
int main(){
    int n;
    string a;
    cin >> n;
    for (int i=0;i<n;++i){
        string m="";
        for (int j=0;j<3;++j){
            cin >> a;
            if (a.size() > m.size()){
                m=a;
            }
            else if (a.size() == m.size()){
                for (int z=0;z<a.size();++z){
                    if (a[z]>m[z]){
                        m=a;
                        break;
                    }
                    else if (a[z]<m[z]){
                        break;
                    }
                }
            }
        }
        cout << m << endl;
    }
    return 0;
}
