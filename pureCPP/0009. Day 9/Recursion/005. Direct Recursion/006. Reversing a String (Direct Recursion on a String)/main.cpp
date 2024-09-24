#include <string>
#include <iostream>

using namespace std;

string reverseString(string str) {
    if (str.length() == 0) // Base Case
        return "";
    return reverseString(str.substr(1)) + str[0]; // Direct Recursive Call
}
