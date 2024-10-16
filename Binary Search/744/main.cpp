#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size() - 1;
        int res = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (letters[mid] <= target) {
                l = mid + 1;
            } else {
                res = mid;
                r = mid - 1;
            }
        }

        if (res == -1) {
            return letters[0];
        } else {
            return letters[res];
        }
    }
};