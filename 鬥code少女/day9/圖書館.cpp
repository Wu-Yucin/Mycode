#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    vector<int> book,max_left,min_right;
    cin >> n;
    max_left.resize(n);
    min_right.resize(n);
    int tmp;
    for (int i=0;i<n;++i){
        cin >> tmp;
        book.push_back(tmp);
        if (i==0){
            max_left[i]=tmp;
            continue;
        }
        if (tmp>max_left[i-1]) max_left[i]=tmp;
        else max_left[i]=max_left[i-1];
    }

    for (int i=n-1;i>=0;--i){
        tmp=book[i];
        if (i==n-1){
            min_right[i]=tmp;
            continue;
        }
        if (tmp<min_right[i+1]) min_right[i]=tmp;
        else min_right[i]=min_right[i+1];
    }

    int sum=1;
    for (int i=0;i<n-1;++i){
        if (max_left[i]<=min_right[i+1]) sum++;
    }
    cout << sum;
    return 0;
}
