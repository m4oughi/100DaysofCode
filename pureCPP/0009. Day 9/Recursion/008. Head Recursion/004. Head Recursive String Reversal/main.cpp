#include <iostream>

using namespace std;

string reverseString(const string& str, int index) {
    if (index < 0)
        return "";
    return reverseString(str, index - 1) + str[index];  // Head recursion
}

string reverseString(const string& str) {
    return reverseString(str, str.length() - 1);
}
