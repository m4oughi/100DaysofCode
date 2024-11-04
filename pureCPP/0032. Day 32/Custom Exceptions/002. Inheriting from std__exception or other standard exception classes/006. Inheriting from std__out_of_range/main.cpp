#include <iostream>
#include <stdexcept>

class MyOutOfRange : public std::out_of_range {
public:
    MyOutOfRange(const std::string& msg) : std::out_of_range(msg) {}
};

int main() {
    try {
        throw MyOutOfRange("Index out of range!");
    } catch (const MyOutOfRange& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
