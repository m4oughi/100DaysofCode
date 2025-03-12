#include <iostream>
#include <string>

int main() {
    std::string str = "123 456 789";
    size_t pos = 0;

    int num1 = std::stoi(str, &pos);
    int num2 = std::stoi(str.substr(pos), &pos);
    int num3 = std::stoi(str.substr(pos));

    std::cout << "Extracted numbers: " << num1 << ", " << num2 << ", " << num3 << "\n";

    return 0;
}
