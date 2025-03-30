#include <iostream>
#include <string>

int main() {
    std::string text = "HeLLo WoRLd";

    for (char& ch : text) {
        if (islower(ch)) {
            ch = toupper(ch);
        } else {
            ch = tolower(ch);
        }
    }

    std::cout << text << std::endl; // Output: hEllO wOrlD

    return 0;
}
