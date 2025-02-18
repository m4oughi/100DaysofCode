#include <iostream>
#include <stack>

bool isPalindrome(const std::string& str) {
    std::stack<char> s;
    for (char ch : str) {
        s.push(ch);
    }

    for (char ch : str) {
        if (s.top() != ch) {
            return false;
        }
        s.pop();
    }
    return true;
}

int main() {
    std::string word = "madam";
    std::cout << (isPalindrome(word) ? "Palindrome" : "Not a Palindrome") << std::endl;

    return 0;
}
