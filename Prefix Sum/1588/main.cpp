#include <algorithm>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> ps;
        ps.push_back(0);
        for (int i = 1; i < arr.size() + 1; i++) {
            ps.push_back(ps[i - 1] + arr[i - 1]);
        }
        int s = 0;
        for (int i = 0; i < ps.size(); i++) {
            for (int j = i + 1; j < ps.size(); j++) {
                if ((j - i) % 2 != 0) {
                    s += ps[j] - ps[i];
                }
            }
        }
        return s;
    }
};