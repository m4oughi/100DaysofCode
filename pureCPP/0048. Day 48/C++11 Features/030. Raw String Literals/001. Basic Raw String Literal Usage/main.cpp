#include <iostream>

int main() {
    std::string raw = R"(This is a raw string literal. \n No escape sequences are processed!)";
    std::cout << raw << std::endl;
    return 0;
}
