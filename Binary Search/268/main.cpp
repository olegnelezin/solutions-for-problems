#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] == m) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return l;
    }
};