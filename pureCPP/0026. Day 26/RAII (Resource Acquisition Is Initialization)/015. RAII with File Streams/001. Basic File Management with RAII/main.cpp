#include <iostream>
#include <fstream>

int main() {
    {
        std::ofstream file("example.txt");
        if (file.is_open()) {
            file << "Hello, RAII with file streams!" << std::endl;
        }
        // File is automatically closed when `file` goes out of scope.
    }
    std::cout << "File stream has been closed." << std::endl;
}
