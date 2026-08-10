#include<bits/stdc++.h>
using namespace std;

struct msg{
    string m;
    int id;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,ins;
    int val,p,now=0;
    msg ms[60000];
    priority_queue<pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > > pd;
    while (cin >> s){
        if (s=="PUT"){
            cin >> ins >> val >> p;
            ms[now].m=ins;
            ms[now].id=val;
            pair<int,int> b={p,now};
            pd.push(b);
            now++;
        }
        else{
            if (pd.empty()) cout << "EMPTY QUEUE!\n";
            else{
                pair<int,int> tmp=pd.top();
                pd.pop();
                cout << ms[tmp.second].m << " " << ms[tmp.second].id << "\n";
            }

        }
    }
    return 0;
}
