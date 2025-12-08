#include<iostream>
using namespace std;

///n:提交的次數,t:提交的時間,s:提交的分數,m_t:最高分數的時間點,m_s:最高分數,serious:嚴重錯誤次數,sum:總分
int main(){
    int n,t,s,m_t=0,m_s=-1,serious=0;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> t >> s;
        if (s>m_s){
            m_s=s;
            m_t=t;
        }
        if (s==-1){
            serious+=1;
        }
    }
    int sum = m_s-n-serious*2;
    if (sum<0){
        sum = 0;
    }
    cout << sum << " " << m_t;
    return 0;
}
