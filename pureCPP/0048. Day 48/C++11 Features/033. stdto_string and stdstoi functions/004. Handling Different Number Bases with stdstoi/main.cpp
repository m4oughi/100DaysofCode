#include <iostream>
#include <string>

int main() {
    std::string binaryStr = "1010";
    std::string hexStr = "FF";

    int binaryNum = std::stoi(binaryStr, nullptr, 2);
    int hexNum = std::stoi(hexStr, nullptr, 16);

    std::cout << "Binary to integer: " << binaryNum << "\n";
    std::cout << "Hex to integer: " << hexNum << "\n";

    return 0;
}
