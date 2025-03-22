#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path path = "example.txt";

    if (std::filesystem::is_regular_file(path)) {
        std::cout << path << " is a file.\n";
    } else if (std::filesystem::is_directory(path)) {
        std::cout << path << " is a directory.\n";
    } else {
        std::cout << path << " does not exist.\n";
    }

    return 0;
}
