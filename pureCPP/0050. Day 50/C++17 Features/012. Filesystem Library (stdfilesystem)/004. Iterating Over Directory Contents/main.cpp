#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path dir = "."; // Current directory

    for (const auto& entry : std::filesystem::directory_iterator(dir)) {
        std::cout << entry.path() << '\n';
    }

    return 0;
}
