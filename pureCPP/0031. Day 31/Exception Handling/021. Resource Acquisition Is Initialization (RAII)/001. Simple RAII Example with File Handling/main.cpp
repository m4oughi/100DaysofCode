#include <iostream>
#include <fstream>

class FileHandler {
public:
    FileHandler(const std::string& fileName) {
        file.open(fileName);
        if (file.is_open()) {
            std::cout << "File opened successfully." << std::endl;
        }
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed automatically in destructor." << std::endl;
        }
    }

private:
    std::fstream file;
};

int main() {
    {
        FileHandler fh("example.txt");
        // File is automatically closed when 'fh' goes out of scope
    }
    return 0;
}
