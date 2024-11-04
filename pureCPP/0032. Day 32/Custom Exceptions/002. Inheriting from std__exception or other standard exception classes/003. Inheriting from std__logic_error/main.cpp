#include <iostream>
#include <stdexcept>

class MyLogicError : public std::logic_error {
public:
    MyLogicError(const std::string& msg) : std::logic_error(msg) {}
};

int main() {
    try {
        throw MyLogicError("Logic error occurred!");
    } catch (const MyLogicError& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
