#include <iostream>
#include <format>
#include <string>

int main() {
    std::string output;
    std::format_to(std::back_inserter(output), "Hello, {}!", "World");

    std::cout << output << "\n";
    return 0;
}
