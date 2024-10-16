#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int> &nums) {
        vector<int> ps;
        ps.push_back(0);
        for (int i = 1; i < nums.size() + 1; i++) {
            ps.push_back(ps[i - 1] + nums[i - 1]);
        }
        for (int i = 0; i < ps.size() - 1; i++) {
            if (ps[i] == ps[ps.size() - 1] - ps[i + 1]) {
                return i;
            }
        }
        return -1;
    }
};