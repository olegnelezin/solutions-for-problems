#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>
#include <map>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long m = n / 2;
    if (n % 2 == 1)
        m++;
    if (k <= m)
        cout << 2 * k - 1;
    else
        cout << (k - m) * 2;
}