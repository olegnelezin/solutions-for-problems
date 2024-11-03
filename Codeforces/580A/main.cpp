#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>
#include <map>
#include <regex>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    int max = 1;
    int count = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) {
            if (a[i] >= a[i - 1]) {
                count++;
            } else {
                count = 1;
            }
        }
        if (count > max)
            max = count;
    }
    cout << max;
}