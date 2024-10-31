#include <iostream>
#include <fstream>

class FileHandler {
public:
    FileHandler(const std::string& fileName) {
        file.open(fileName);
        if (!file.is_open()) {
            throw "Failed to open file!";
        }
    }
    ~FileHandler() {
        file.close();
        std::cout << "File closed." << std::endl;
    }

private:
    std::fstream file;
};

int main() {
    try {
        FileHandler fh("nonexistent_file.txt");
    } catch (const char* e) {
        std::cout << "Caught exception: " << e << std::endl;
    }
    return 0;
}
