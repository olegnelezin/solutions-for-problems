#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        std::istringstream ss(s);
        std::vector<std::string> tokens;
        std::string token;
        while (ss >> token) {
            if (!token.empty()) {
                tokens.push_back(token);
            }
        }
        for (int i = 0; i < tokens.size(); i++) {
            int k = 0, j = tokens[i].size() - 1;
            while (k < j) {
                char t = tokens[i][k];
                tokens[i][k] = tokens[i][j];
                tokens[i][j] = t;
                k++;
                j--;
            }
        }
        string sk;
        for (int i = 0; i < tokens.size(); i++) {
            sk += tokens[i];
            if (i != tokens.size() - 1) {
                sk += " ";
            }
        }
        return sk;
    }
};