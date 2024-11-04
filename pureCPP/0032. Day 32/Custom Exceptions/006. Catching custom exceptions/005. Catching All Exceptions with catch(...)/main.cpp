#include <iostream>
#include <exception>

class FileOpenException : public std::exception {
public:
    const char* what() const noexcept override {
        return "File open exception occurred!";
    }
};

int main() {
    try {
        throw FileOpenException();
    } catch (...) {  // Catch any exception
        std::cout << "Caught an unknown exception." << std::endl;
    }
    return 0;
}
