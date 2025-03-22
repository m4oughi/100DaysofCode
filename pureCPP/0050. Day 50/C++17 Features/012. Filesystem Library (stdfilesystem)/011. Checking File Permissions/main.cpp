#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path filePath = "example.txt";

    auto perms = std::filesystem::status(filePath).permissions();

    if ((perms & std::filesystem::perms::owner_read) != std::filesystem::perms::none) {
        std::cout << "Owner has read permission.\n";
    }

    return 0;
}
