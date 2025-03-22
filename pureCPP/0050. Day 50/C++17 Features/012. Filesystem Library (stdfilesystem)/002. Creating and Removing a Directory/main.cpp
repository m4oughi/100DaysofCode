#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path dirPath = "TestDir";

    if (std::filesystem::create_directory(dirPath)) {
        std::cout << "Directory created successfully.\n";
    }

    if (std::filesystem::remove(dirPath)) {
        std::cout << "Directory removed successfully.\n";
    }

    return 0;
}
