#include<bits/stdc++.h>
using namespace std;

//a:整數a,b:整數b,ans:答案(只有0和1),x:判斷變數
int a,b,ans,x;
int main(){
    cin >> a >> b >> ans;

    if (a!=0){a=1;}
    if(b!=0){b=1;}
    
    //AND
    if ( (a && b) == ans ){
        cout << "AND\n" ;
        x += 1;
    }
    //OR
    if ( (a || b) == ans ){
        cout << "OR\n" ;
        x += 1;
    }
    //XOR
    if ( (a != b) && (ans==1)) {
        cout << "XOR\n" ;
        x +=1;
    }
    else if ((a==b) && (ans==0)){
        cout << "XOR\n" ;
        x +=1;
    }
    //IMPOSSIBLE
    if (x == 0){
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}
