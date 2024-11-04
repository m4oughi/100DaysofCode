#include <iostream>
#include <exception>

class AbstractException : public std::exception {
public:
    virtual const char* what() const noexcept = 0;  // Pure virtual function
};

class FileOpenException : public AbstractException {
public:
    const char* what() const noexcept override {
        return "File open error occurred!";
    }
};

class FileReadException : public AbstractException {
public:
    const char* what() const noexcept override {
        return "File read error occurred!";
    }
};

int main() {
    try {
        throw FileReadException();
    } catch (const AbstractException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
