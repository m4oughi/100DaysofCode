#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path filePath = "example.txt";

    if (std::filesystem::exists(filePath)) {
        std::cout << "File size: " << std::filesystem::file_size(filePath) << " bytes\n";
    }

    return 0;
}
