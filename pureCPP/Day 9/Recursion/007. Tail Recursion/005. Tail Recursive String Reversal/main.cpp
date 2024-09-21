#include <iostream>

using namespace std;

string reverseHelper(const string& str, int index, string accumulator) {
    if (index < 0)
        return accumulator;
    return reverseHelper(str, index - 1, accumulator + str[index]);  // Tail recursion
}

string reverseString(const string& str) {
    return reverseHelper(str, str.length() - 1, "");  // Start with an empty accumulator
}
