#include <iostream>
#include <string>

int main() {
    std::string text = "hello";

    for (char& ch : text) { // Using reference to modify characters
        ch = toupper(ch);
    }

    std::cout << text << std::endl; // Output: HELLO

    return 0;
}
