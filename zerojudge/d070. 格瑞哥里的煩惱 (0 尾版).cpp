#include<bits/stdc++.h>
using namespace std;

//y:年分
int y;
int main(){
    cin >> y;
    while (y != 0){
        if (y%4 != 0){               //不是4的倍數
            cout << "a normal year" << endl;
        }
        else if (y%100 != 0){        //是4的倍數,不是100的倍數 
            cout << "a leap year" << endl;
        }
        else if (y%400 != 0){        //是100的倍數,不是400的倍數
            cout << "a normal year" << endl;
        }
        else{                        //是400的倍數
            cout << "a leap year" << endl;
        }
        cin >> y;
    }
    return 0;
}
