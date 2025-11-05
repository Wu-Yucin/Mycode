#include<bits/stdc++.h>
using namespace std;

//s:花起始高度,e:要求花高,a:顧客耐性
int s,e,a,day=1;
int main(){
    cin >> s >> e >> a;
    while(true){
        if(day%11==0){
            a-=1;
            if(a==0){
                cout<<"unsalable";
                break;
            }
        }
        if(s>=e){
            cout<<day;
            break;
        }
        if(s<e){
            if(day%9==0||day%10==0){
                int nothing;
            }
            else{
                if(day%3!=0){
                    s+=s/10;
                }
                if(day%3==0){
                    s+=s/3;
                }
            }
        }
        day+=1;
    }
    return 0;
}
