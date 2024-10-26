#include <algorithm>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int k = 0;
        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            if (nums[i] + nums[j] < target) {
                k += j - i;
                i++;
            } else {
                j--;
            }
        }
        return k;
    }
};
