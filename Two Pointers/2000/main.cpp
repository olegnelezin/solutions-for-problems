#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = word.find(ch);
        if (index != -1) {
            int i = 0, j = index;
            while (i < j) {
                char t;
                t = word[i];
                word[i] = word[j];
                word[j] = t;
                i++;
                j--;
            }
        }
        return word;
    }
};