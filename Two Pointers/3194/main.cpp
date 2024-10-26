#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<double> averages;
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            averages.push_back((nums.at(i) + nums.at(j)) / 2.0);
            i++;
            j--;
        }
        double min = 4345345;
        for (int i = 0; i < averages.size(); i++) {
            if (averages[i] < min) {
                min = averages[i];
            }
        }
        return min;
    }
};