#include <iostream>
#include <cmath>
using namespace std;

///判斷整數X是否為質數
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    // 從最接近中間的位置開始找兩質數的最小差值
    for (int i = n / 2; i >= 2; i--) {
        int j = n - i;
        if (isPrime(i) && isPrime(j)) {
            cout << n << " = " << i << " + " << j;
            return 0;
        }
    }
}
