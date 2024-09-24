#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void reverseString(string &str, int start, int end) {
    if (start >= end) // Base Case
        return;

    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
};

int main() {

    return 0;
}