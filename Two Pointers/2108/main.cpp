#include <algorithm>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int k = 0; k < words.size(); k++) {
            int i = 0, j = words[k].size() - 1;
            bool f = true;
            while (i < j && f) {
                if (words[k][i] != words[k][j]) {
                    f = false;
                } else {
                    i++;
                    j--;
                }
            }
            if (f)
                return words[k];
        }
        return "";
    }
};