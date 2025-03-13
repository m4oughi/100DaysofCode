#include <iostream>

enum FileSize {
    KB = 1'024,         // 1 KB
    MB = 1'024'000,     // 1 MB
    GB = 1'024'000'000  // 1 GB
};

int main() {
    std::cout << "1 MB in bytes: " << MB << std::endl;
    return 0;
}
