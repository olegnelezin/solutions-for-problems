#include <iostream>
using namespace std;

// https://cups.online/ru/workareas/startcode/1178/2296/

int main() {
    long long a, b, c, n;
    cin >> a >> b >> c >> n;
    long long s = (a + b + c + n) / 4;
    if (a <= s * 2 && b <= s && c <= s) {
        cout << 2 * s - a << "\n";
        cout << s - b << "\n";
        cout << s - c;
    } else
        cout << 0;
}