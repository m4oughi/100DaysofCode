#include <iostream>
#include <exception>

class GeneralError : public std::exception {
public:
    const char* what() const noexcept override {
        return "General error occurred!";
    }
};

class FileError : public GeneralError {
public:
    const char* what() const noexcept override {
        return "File error occurred!";
    }
};

class NetworkError : public GeneralError {
public:
    const char* what() const noexcept override {
        return "Network error occurred!";
    }
};

int main() {
    try {
        throw FileError();
    } catch (const NetworkError& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    } catch (const FileError& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    } catch (const GeneralError& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
