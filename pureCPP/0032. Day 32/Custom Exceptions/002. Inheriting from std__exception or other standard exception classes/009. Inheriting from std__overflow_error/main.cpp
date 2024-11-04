#include <iostream>
#include <stdexcept>

class MyOverflowError : public std::overflow_error {
public:
    MyOverflowError(const std::string& msg) : std::overflow_error(msg) {}
};

int main() {
    try {
        throw MyOverflowError("Overflow error occurred!");
    } catch (const MyOverflowError& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
