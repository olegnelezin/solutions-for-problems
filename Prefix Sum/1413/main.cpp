#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> s;
        s.push_back(0);
        int min = 101;
        for (int i = 1; i < nums.size() + 1; i++) {
            int t = s[i - 1] + nums[i - 1];
            if (t < min) {
                min = t;
            }
            s.push_back(t);
        }
        if (min > 0) {
            return 1;
        } else {
            return abs(min) + 1;
        }
    }
};