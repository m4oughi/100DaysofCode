#include <iostream>
#include <string>

int main() {
    std::string text = "Hello World";

    std::cout << "Reversed string: ";
    for (auto it = text.rbegin(); it != text.rend(); ++it) {
        std::cout << *it;
    }

    return 0;
}
