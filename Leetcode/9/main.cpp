#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>
#include <map>
#include <regex>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long long t = x;
        long long rev = 0;
        while (t > 0) {
            int d = t % 10;
            rev = rev * 10 + d;
            t /= 10;
        }
        return x == rev;
    }
};