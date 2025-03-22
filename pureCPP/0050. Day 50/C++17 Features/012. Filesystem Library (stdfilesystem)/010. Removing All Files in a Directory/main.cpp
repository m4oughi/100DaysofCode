#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path dirPath = "TestDir";

    std::uintmax_t count = std::filesystem::remove_all(dirPath);
    std::cout << "Deleted " << count << " files/directories.\n";

    return 0;
}
