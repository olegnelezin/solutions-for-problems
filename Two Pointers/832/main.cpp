#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            int k = 0, j = image[i].size() - 1;
            while (k < j) {
                int t = image[i][k];
                image[i][k] = image[i][j];
                image[i][j] = t;
                k++;
                j--;
            }
            for (int h = 0; h < image.size(); h++) {
                if (image[i][h] == 1)
                    image[i][h] = 0;
                else
                    image[i][h] = 1;
            }
        }
        return image;
    }
};