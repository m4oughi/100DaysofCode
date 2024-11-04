#include <iostream>
#include <exception>
#include <string>

class DynamicDataException : public std::exception {
private:
    std::string* errorMessage;
public:
    DynamicDataException(const std::string& msg) {
        errorMessage = new std::string(msg);
    }

    ~DynamicDataException() {
        delete errorMessage;
    }

    const char* what() const noexcept override {
        return errorMessage->c_str();
    }
};

int main() {
    try {
        throw DynamicDataException("Dynamically allocated error message");
    } catch (const DynamicDataException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
