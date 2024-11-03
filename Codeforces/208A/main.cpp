#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>
#include <map>
#include <regex>
using namespace std;

int main() {
    string s;
    cin >> s;
    while (s.ends_with("WUB")) {
        s.replace(s.length() - 3, s.length() - 1, "");
    }

    while (s.starts_with("WUB")) {
        s.replace(0, 3, "");
    }
    while (s.find("WUB") < 201) {
        int i = s.find("WUB");
        s[i] = ' ';
        s.erase(i+1, 2);
    }
    s = std::regex_replace(s, std::regex(" {2,}"), " ");
    cout << s;
}