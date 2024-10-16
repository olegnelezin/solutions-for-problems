#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 0;
        int r = num;
        while (l <= r) {
            long long m = l + (r - l) / 2;
            if (m * m == num) {
                return true;
            } else if (m * m < num) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return false;
    }
};