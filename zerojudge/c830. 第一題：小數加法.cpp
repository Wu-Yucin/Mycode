#include <iostream>
using namespace std;

int main(){
    string a, b;     // 兩個輸入的七進制數字
    int p, i, j;     // 小數點在輸入字串中的位置、a / b 字串索引值、x / y 陣列索引值
    int x[15] = {0}; // a = "00000000.0000000"，前八格為小數點前，後七格為小數點後
    int y[15] = {0}; // b = "00000000.0000000"
                     //      01234567 89....

    cin >> a >> b;
    p = a.find("."); // 尋找 a 當中小數點的位置
    if (p == a.npos){
        for (i = a.size() - 1, j = 7; i >= 0; --i, --j)
            x[j] = a[i] - '0';
    }
    else{
        for (i = p - 1, j = 7; i >= 0; --i, --j)
            x[j] = a[i] - '0';
        for (i = p + 1, j = 8; i < a.size(); ++i, ++j)
            x[j] = a[i] - '0';
    }

    p = b.find("."); // 尋找 b 當中小數點的位置
    if (p == b.npos){
        for (i = b.size() - 1, j = 7; i >= 0; --i, --j)
            y[j] = b[i] - '0';
    }
    else{
        for (i = p - 1, j = 7; i >= 0; --i, --j)
            y[j] = b[i] - '0';
        for (i = p + 1, j = 8; i < b.size(); ++i, ++j)
            y[j] = b[i] - '0';
    }

    // 進行直式七進制加法，結果存在 y（將原本的值覆蓋）
    int sum, carry = 0;
    for (int i = 14; i >= 0; --i){
        sum = x[i] + y[i] + carry;
        y[i] = sum % 7;
        carry = sum / 7;
    }

    // 確認小數點前由左往右看第一個不為 0 的值是在第幾位
    int first_not_zero = 8; // 如果不在前 7 位表示小數點前沒有數字
    for (int i = 0; i <= 7; ++i){
        if (y[i] != 0){
            first_not_zero = i;
            break;
        }
    }

    // 確認小數點後由右往左看第一個不為 0 的值是在第幾位
    int last_not_zero = 7; // 如果不在後 7 位代表小數點後沒有數字
    for (int i = 14; i >= 8; --i){
        if (y[i] != 0){
            last_not_zero = i;
            break;
        }
    }

    // 如果小數點前沒有數字，輸出 0
    if (first_not_zero == 8)
        cout << 0;
    // 否則，輸出該數字
    else{
        for (int i = first_not_zero; i <= 7; ++i)
            cout << y[i];
    }

    // 如果小數點後沒有數字，什麼都不做
    // 如果小數點後有數字，則輸出小數點，再輸出那後面的數字
    if (last_not_zero > 7){
        cout << '.';
        for (int i = 8; i <= last_not_zero; ++i)
            cout << y[i];
    }

    return 0;
}
