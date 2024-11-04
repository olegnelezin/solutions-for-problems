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
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int t = target - nums[i];
            if (m.contains(t) && m[t] != i) {
                return {i, m[t]};
            }
        }
        return {0, 0};
    }
};