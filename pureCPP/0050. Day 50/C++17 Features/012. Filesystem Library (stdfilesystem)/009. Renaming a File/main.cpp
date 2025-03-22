#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path oldName = "example.txt";
    std::filesystem::path newName = "renamed_example.txt";

    std::filesystem::rename(oldName, newName);

    std::cout << "File renamed successfully.\n";

    return 0;
}
