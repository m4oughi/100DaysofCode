#include <iostream>
#include <deque>

bool isPalindrome(const std::string& word) {
    std::deque<char> dq;

    for (char ch : word)
        dq.push_back(ch);

    while (dq.size() > 1) {
        if (dq.front() != dq.back())
            return false;
        dq.pop_front();
        dq.pop_back();
    }

    return true;
}

int main() {
    std::string word = "racecar";

    if (isPalindrome(word))
        std::cout << word << " is a palindrome.\n";
    else
        std::cout << word << " is not a palindrome.\n";

    return 0;
}
