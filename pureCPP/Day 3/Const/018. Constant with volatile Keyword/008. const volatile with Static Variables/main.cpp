#include <iostream>

class Status {
public:
    static const volatile int code; // Static constant volatile variable
};

const volatile int Status::code = 300;

int main() {
    std::cout << Status::code << std::endl; // Prints 300
}
