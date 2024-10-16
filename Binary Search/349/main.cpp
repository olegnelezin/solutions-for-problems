#include <algorithm>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(), nums2.end());
        set<int> s;
        for (int i = 0; i < nums1.size(); i++) {
            int t = nums1[i];
            int l = 0;
            int r = nums2.size() - 1;
            while (l <= r) {
                int m = l + (r - l) / 2;
                if (nums2[m] == t) {
                    s.insert(t);
                    break;
                } else if (nums2[m] < t) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
        }
        vector<int> res;
        for (int a : s) {
            res.push_back(a);
        }
        return res;
    }
};

int main() {
    vector<char> v = {'c','f','j'};
}