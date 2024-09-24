#include <iostream>
#include <functional>
#include <string>

int main() {
    std::function<bool(const std::string&, int, int)> isPalindrome = [&](const std::string& str, int left, int right) -> bool {
        if (left >= right) return true;
        if (str[left] != str[right]) return false;
        return isPalindrome(str, left + 1, right - 1);
    };

    std::string word = "racecar";
    std::cout << "Is 'racecar' a palindrome? " << (isPalindrome(word, 0, word.length() - 1) ? "Yes" : "No") << std::endl;
    return 0;
}
