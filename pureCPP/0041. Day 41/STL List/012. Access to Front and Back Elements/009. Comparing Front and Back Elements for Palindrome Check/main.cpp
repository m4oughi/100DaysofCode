#include <iostream>
#include <list>

bool isPalindrome(std::list<char>& word) {
    while (word.size() > 1) {
        if (word.front() != word.back()) {
            return false;
        }
        word.pop_front();
        word.pop_back();
    }
    return true;
}

int main() {
    std::list<char> word = {'r', 'a', 'd', 'a', 'r'};

    if (isPalindrome(word)) {
        std::cout << "The list is a palindrome.\n";
    } else {
        std::cout << "The list is not a palindrome.\n";
    }

    return 0;
}
