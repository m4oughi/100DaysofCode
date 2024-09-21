#include <iostream>
#include <string>
using namespace std;

void reverseHelper(string& str, int start, int end);

void reverseString(string& str) {
    reverseHelper(str, 0, str.length() - 1);  // Initialize recursion
}

// Helper function to perform the actual reversal
void reverseHelper(string& str, int start, int end) {
    if (start >= end)
        return;

    swap(str[start], str[end]);  // Swap characters
    reverseHelper(str, start + 1, end - 1);  // Recursive call
}

int main() {
    string s = "Hello, World!";
    reverseString(s);
    cout << s << endl;  // Output will be: "!dlroW ,olleH"
    return 0;
}
