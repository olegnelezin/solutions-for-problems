#include <algorithm>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ps;
        ps.push_back(0);
        int max = ps[0];
        for (int i = 1; i < gain.size() + 1; i++) {
            ps.push_back(ps[i - 1] + gain[i - 1]);
            if (ps[i] > max) {
                max = ps[i];
            }
        }
        return max;
    }
};