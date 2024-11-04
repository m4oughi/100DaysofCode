#include <iostream>
#include <stdexcept>

class MyInvalidArgument : public std::invalid_argument {
public:
    MyInvalidArgument(const std::string& msg) : std::invalid_argument(msg) {}
};

int main() {
    try {
        throw MyInvalidArgument("Invalid argument passed!");
    } catch (const MyInvalidArgument& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
