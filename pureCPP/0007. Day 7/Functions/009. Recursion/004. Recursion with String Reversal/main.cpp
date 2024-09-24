#include <iostream>

// Recursive function to reverse a string
void reverseString(const std::string& str, int index) {
    if (index == 0) {
        std::cout << str[index];
        return;
    }
    std::cout << str[index];
    reverseString(str, index - 1);  // Recursive case
}

int main() {
    std::string text = "hello";
    reverseString(text, text.length() - 1);
    std::cout << std::endl;
    return 0;
}
