#include <iostream>
#include <fstream>

int main() {
    {
        std::ofstream file("example.txt");
        if (file.is_open()) {
            file << "Writing to a file using RAII.\n";
        }  // File is automatically closed when `file` goes out of scope.
    }
    std::cout << "File closed automatically." << std::endl;
}
