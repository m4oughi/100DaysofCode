#include <iostream>
#include <string>

int main() {
    std::string text = "hello";

    for (std::string::iterator it = text.begin(); it != text.end(); ++it) {
        *it = toupper(*it); // Convert to uppercase
    }

    std::cout << "Modified string: " << text << std::endl;

    return 0;
}
