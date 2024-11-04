#include <iostream>
#include <stdexcept>

class MyLengthError : public std::length_error {
public:
    MyLengthError(const std::string& msg) : std::length_error(msg) {}
};

int main() {
    try {
        throw MyLengthError("Length exceeded limit!");
    } catch (const MyLengthError& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
