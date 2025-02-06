#include <iostream>
#include <list>

bool isPalindrome(std::list<int> lst) {
    std::list<int> reversedList = lst; // Copy the list
    reversedList.reverse(); // Reverse the copy

    return lst == reversedList; // Compare original and reversed list
}

int main() {
    std::list<int> numbers = {1, 2, 3, 2, 1};

    if (isPalindrome(numbers))
        std::cout << "The list is a palindrome.\n";
    else
        std::cout << "The list is not a palindrome.\n";

    return 0;
}
