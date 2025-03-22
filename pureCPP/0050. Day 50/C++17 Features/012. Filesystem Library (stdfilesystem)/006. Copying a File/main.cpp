#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path src = "example.txt";
    std::filesystem::path dest = "copy_example.txt";

    std::filesystem::copy(src, dest, std::filesystem::copy_options::overwrite_existing);

    std::cout << "File copied successfully.\n";

    return 0;
}
