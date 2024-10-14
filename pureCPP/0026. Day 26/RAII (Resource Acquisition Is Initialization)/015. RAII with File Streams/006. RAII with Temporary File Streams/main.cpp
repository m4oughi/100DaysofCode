#include <iostream>
#include <fstream>

void createTemporaryFile() {
    std::ofstream tempFile("temp.txt");
    if (tempFile.is_open()) {
        tempFile << "This is a temporary file." << std::endl;
        std::cout << "Temporary file created." << std::endl;
    }
    // The file will be closed when the function returns, even if an error occurs.
}

int main() {
    createTemporaryFile();
    std::cout << "Temporary file has been closed." << std::endl;
}
