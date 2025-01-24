#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "aabbcc";

    auto it = std::adjacent_find(text.rbegin(), text.rend());

    if (it != text.rend()) {
        std::cout << "Last adjacent duplicate character in reverse order: " << *it 
                  << " at reverse index: " << std::distance(text.rbegin(), it) << std::endl;
    } else {
        std::cout << "No adjacent duplicates found in reverse order." << std::endl;
    }

    return 0;
}
