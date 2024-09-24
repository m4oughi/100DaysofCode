#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

void backtrack(const string& s, int start, vector<string>& current, vector<vector<string>>& result) {
    if (start >= s.size()) {
        result.push_back(current);
        return;
    }

    for (int end = start; end < s.size(); end++) {
        if (isPalindrome(s, start, end)) {
            current.push_back(s.substr(start, end - start + 1));
            backtrack(s, end + 1, current, result);
            current.pop_back();  // Backtrack
        }
    }
}

int main() {
    string s = "aab";
    vector<vector<string>> result;
    vector<string> current;
    backtrack(s, 0, current, result);

    for (const auto& partition : result) {
        for (const auto& str : partition)
            cout << str << " ";
        cout << endl;
    }
    return 0;
}
