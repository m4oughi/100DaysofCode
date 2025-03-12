#include <iostream>
#include <string>

int main() {
    std::string str = "12345";
    int num = std::stoi(str);

    std::cout << "String to integer: " << num << "\n";

    return 0;
}
