#include <iostream>
#include <fstream>

class FileHandler {
public:
    FileHandler(const std::string& filename) {
        file.open(filename);
        if (!file) {
            throw std::runtime_error("Could not open file");
        }
        std::cout << "File opened" << std::endl;
    }
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed (unwinding)" << std::endl;
        }
    }
private:
    std::ofstream file;
};

int main() {
    try {
        FileHandler file("test.txt");
        throw std::runtime_error("Exception after file open");
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
