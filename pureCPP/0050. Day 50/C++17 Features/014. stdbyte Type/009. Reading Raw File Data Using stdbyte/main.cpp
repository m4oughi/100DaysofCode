#include <iostream>
#include <fstream>
#include <vector>
#include <cstddef>

int main() {
    std::ifstream file("example.bin", std::ios::binary);
    if (!file) {
        std::cerr << "Failed to open file\n";
        return 1;
    }

    std::vector<std::byte> fileData((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    std::cout << "File read into std::byte vector successfully!\n";
    return 0;
}
