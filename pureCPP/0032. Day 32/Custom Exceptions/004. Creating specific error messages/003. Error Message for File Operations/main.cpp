#include <iostream>
#include <exception>
#include <string>

class FileNotFoundException : public std::exception {
private:
    std::string message;
public:
    FileNotFoundException(const std::string& filename) {
        message = "Error: File '" + filename + "' not found!";
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw FileNotFoundException("data.txt");
    } catch (const FileNotFoundException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
