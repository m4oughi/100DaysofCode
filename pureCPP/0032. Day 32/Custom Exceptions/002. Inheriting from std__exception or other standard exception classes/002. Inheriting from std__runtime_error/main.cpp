#include <iostream>
#include <stdexcept>

class MyRuntimeError : public std::runtime_error {
public:
    MyRuntimeError(const std::string& msg) : std::runtime_error(msg) {}
};

int main() {
    try {
        throw MyRuntimeError("Runtime error occurred!");
    } catch (const MyRuntimeError& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
