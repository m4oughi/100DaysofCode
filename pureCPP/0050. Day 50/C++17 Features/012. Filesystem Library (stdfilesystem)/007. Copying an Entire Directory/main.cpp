#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path srcDir = "TestDir";
    std::filesystem::path destDir = "BackupDir";

    std::filesystem::copy(srcDir, destDir, std::filesystem::copy_options::recursive);

    std::cout << "Directory copied successfully.\n";

    return 0;
}
