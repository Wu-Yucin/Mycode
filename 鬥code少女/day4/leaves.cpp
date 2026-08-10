#include<bits/stdc++.h>
using namespace std;

char tree[1000000];

void init_tree(){
    for (int i=0;i<1000000;++i){
        tree[i]=-1;
    }
}

void settree(char alpha){
    int i=0;
    while (true){
        if (tree[i]==-1){
            tree[i]=alpha;
            break;
        }
        if (alpha<=tree[i]){
            i=i*2+1;
        }
        else if (alpha>tree[i]){
            i=i*2+2;
        }
    }
}

void pre(int i){
    if (tree[i]==-1) return;
    cout << tree[i];
    pre(i*2+1);
    pre(i*2+2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<string> point;
    string s;

    while (cin >> s){
        if (s=="*" || s=="$"){
            if (!point.empty()){
                init_tree();

                for (int i=point.size()-1;i>=0;--i){
                    string tmp=point[i];
                    for (int j=0;j<tmp.size();++j){
                        settree(tmp[j]);
                    }
                }
            }

            pre(0);
            cout << "\n";

            point.clear();
        }

        if (s=="$") break;
        else if (s!="*"){
            point.push_back(s);
        }
    }
    return 0;
}
