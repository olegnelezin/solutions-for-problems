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
    int countGoodSubstrings(string s) {
        int c = 0;
        for (int i = 2; i < s.length(); i++) {
            if (s[i] == s[i-1] ||
                s[i] == s[i-2] ||
                s[i-1] == s[i-2]) {

            } else {
                c++;
            }
        }
        return c;
    }
};