#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "hello world, hello universe";
    std::string word = "hello";

    auto it = std::find_end(text.begin(), text.end(), word.begin(), word.end());

    if (it != text.end()) {
        std::cout << "Last occurrence of '" << word << "' found at index: " 
                  << std::distance(text.begin(), it) << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}
