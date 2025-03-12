#include <iostream>
#include <string>

int main() {
    std::string invalidStr = "123abc";

    try {
        int num = std::stoi(invalidStr);
        std::cout << "Converted number: " << num << "\n";
    } catch (const std::invalid_argument &e) {
        std::cout << "Invalid argument: " << e.what() << "\n";
    } catch (const std::out_of_range &e) {
        std::cout << "Out of range: " << e.what() << "\n";
    }

    return 0;
}
