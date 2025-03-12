#include <iostream>

int main() {
    const char* raw_str = R"(C:\Users\Name\Documents\file.txt)";

    std::cout << "Raw string literal: " << raw_str << std::endl;

    return 0;
}
