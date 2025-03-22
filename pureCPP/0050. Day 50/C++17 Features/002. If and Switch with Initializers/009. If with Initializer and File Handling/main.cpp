#include <iostream>
#include <fstream>

int main() {
    if (std::ifstream file("example.txt"); file.is_open()) {
        std::cout << "File opened successfully.\n";
    } else {
        std::cout << "Failed to open file.\n";
    }
    return 0;
}
