#include <iostream>
#include <string>
using namespace std;

int main() {
    int convert[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21,
                     22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    char firstChar;
    if (!(cin >> firstChar)) return 0;
    int num = convert[firstChar - 'A'];
    int s = (num / 10) + (num % 10 * 9);
    char c;
    for (int i = 8; i >= 1; --i) {
        cin >> c;
        s += (c - '0') * i;
    }
    cin >> c;
    s += (c - '0');
    if (s % 10 == 0) {
        cout << "real" << endl;
    } else {
        cout << "fake" << endl;
    }

    return 0;
}
