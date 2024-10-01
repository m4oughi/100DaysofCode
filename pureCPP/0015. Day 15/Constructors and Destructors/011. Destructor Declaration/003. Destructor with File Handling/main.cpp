#include <iostream>
#include <fstream>

class FileHandler {
private:
    std::ofstream file;
public:
    FileHandler(const std::string& fileName) {
        file.open(fileName);
        if (file.is_open()) {
            std::cout << "File opened: " << fileName << std::endl;
        } else {
            std::cout << "Failed to open file." << std::endl;
        }
    }
    
    ~FileHandler() {
        if (file.is_open()) {
            file.close();  // Close the file
            std::cout << "File closed." << std::endl;
        }
    }
};

int main() {
    FileHandler fh("example.txt");
    // File will be closed automatically when the object is destroyed
    return 0;
}
