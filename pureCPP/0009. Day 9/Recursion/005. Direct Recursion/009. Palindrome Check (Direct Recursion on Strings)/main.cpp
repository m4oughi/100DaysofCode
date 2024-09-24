#include <iostream>

using namespace std;

bool isPalindrome(string str, int start, int end) {
    if (start >= end) // Base Case
        return true;
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1); // Direct Recursive Call
}
