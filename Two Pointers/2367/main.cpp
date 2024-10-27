#include <algorithm>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int i = 0, j = 1, k = 2;
        int c = 0;
        if (nums.size() < 3) {
        } else {
            while (k < nums.size() && i < nums.size() && j < nums.size()) {
                if (nums[j] - nums[i] < diff) {
                    j++;
                } else if (nums[j] - nums[i] > diff) {
                    i++;
                } else {
                    if (nums[k] - nums[j] <  diff) {
                        k++;
                    } else if (nums[k] - nums[j] > diff) {
                        j++;
                    } else {
                        c++;
                        k++;
                    }
                }
            }
        }
        return c;
    }
};