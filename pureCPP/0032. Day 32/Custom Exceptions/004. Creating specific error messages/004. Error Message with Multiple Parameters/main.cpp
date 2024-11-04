#include <iostream>
#include <exception>
#include <string>

class OutOfRangeException : public std::exception {
private:
    std::string message;
public:
    OutOfRangeException(int index, int size) {
        message = "Error: Index " + std::to_string(index) + " is out of range. Maximum allowed index is " + std::to_string(size - 1) + ".";
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        throw OutOfRangeException(10, 5);
    } catch (const OutOfRangeException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
