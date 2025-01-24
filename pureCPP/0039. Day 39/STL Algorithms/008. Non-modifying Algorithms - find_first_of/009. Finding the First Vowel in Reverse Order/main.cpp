#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "hello world";
    std::string vowels = "aeiou";

    auto it = std::find_first_of(text.rbegin(), text.rend(), vowels.begin(), vowels.end());

    if (it != text.rend()) {
        std::cout << "Last vowel (first in reverse order): " << *it 
                  << " at index: " << std::distance(text.begin(), it.base() - 1) << std::endl;
    } else {
        std::cout << "No vowels found." << std::endl;
    }

    return 0;
}
