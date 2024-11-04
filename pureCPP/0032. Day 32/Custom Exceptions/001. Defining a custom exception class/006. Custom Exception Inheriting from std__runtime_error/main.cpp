#include <iostream>
#include <stdexcept>
#include <string>

class MyRuntimeException : public std::runtime_error {
public:
    MyRuntimeException(const std::string& msg) : std::runtime_error(msg) {}
};

int main() {
    try {
        throw MyRuntimeException("A runtime error occurred!");
    } catch (const MyRuntimeException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
