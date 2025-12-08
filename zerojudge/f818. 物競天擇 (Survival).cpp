#include<iostream>
using namespace std;

///n:小獅子總數,h:身高,w:體重,s:強弱,m_h:最弱身高,m_w:最弱體重
int main(){
    int n,h[2000],w[2000],s=0;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> h[i];
    }
    for (int i=0;i<n;++i){
        cin >> w[i];
    }
    int min=1000000,m_h=0,m_w=0;
    for (int i=0;i<n;++i){
        s = h[i]*w[i];
        if (s<min){
            min=s;
            m_h=h[i];
            m_w=w[i];
        }
    }
    cout << m_h << " " << m_w;
    return 0;
}
