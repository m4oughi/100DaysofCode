#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path filePath = "example.txt";
    std::cout << "Absolute path: " << std::filesystem::absolute(filePath) << '\n';

    return 0;
}
