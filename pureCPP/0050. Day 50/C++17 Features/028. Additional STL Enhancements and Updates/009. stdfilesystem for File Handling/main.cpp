#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path filePath = "example.txt";

    if (std::filesystem::exists(filePath)) {
        std::cout << "File exists!\n";
    } else {
        std::cout << "File does not exist.\n";
    }

    return 0;
}
