#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::space_info space = std::filesystem::space("C:/");

    std::cout << "Free space: " << space.free / (1024 * 1024) << " MB\n";
    std::cout << "Total space: " << space.capacity / (1024 * 1024) << " MB\n";

    return 0;
}
