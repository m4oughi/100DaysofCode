#include <iostream>
#include <fstream>

class FileManager {
    std::ofstream file;

public:
    FileManager(const std::string& filename) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "File opened successfully.\n";
        }
    }

    ~FileManager() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed in destructor.\n";
        }
    }

    void writeToFile(const std::string& content) {
        if (file.is_open()) {
            file << content << std::endl;
        }
    }
};

int main() {
    {
        FileManager fileManager("example.txt");
        fileManager.writeToFile("RAII ensures proper resource management.");
    }  // FileManager's destructor is called, closing the file.
    std::cout << "File handled by RAII." << std::endl;
}
