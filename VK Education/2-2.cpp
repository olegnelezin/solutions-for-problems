#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://cups.online/ru/workareas/startcode/1185/2298/

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int mab = min(a, b);
    int mabc = min(mab, c);
    if (a == mabc) {
        cout << min(b, c);
    } else if (b == mabc) {
        cout << min(a, c);
    } else {
        cout << min(a, b);
    }
}