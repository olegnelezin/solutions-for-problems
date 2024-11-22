#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://cups.online/ru/workareas/startcode/1185/2299/

int main() {
    int s, n;
    cin >> s >> n;
    int s1 = 0, s2 = 0;
    while (n--) {
        int x;
        cin >> x;
        if (s1 + x <= s) {
            s1 += x;
        } else {
            s2 += x;
        }
    }
    cout << s1 << " " << s2;
}