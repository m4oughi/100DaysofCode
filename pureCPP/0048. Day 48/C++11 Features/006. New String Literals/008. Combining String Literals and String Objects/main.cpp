#include <iostream>
#include <string>

int main() {
    std::string normal_string = "Normal ";
    std::string utf8_string = u8"UTF-8 String";
    std::string combined = normal_string + utf8_string;

    std::cout << "Combined: " << combined << std::endl;

    return 0;
}
