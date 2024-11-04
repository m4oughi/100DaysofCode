#include <iostream>
#include <stdexcept>

class MyDomainError : public std::domain_error {
public:
    MyDomainError(const std::string& msg) : std::domain_error(msg) {}
};

int main() {
    try {
        throw MyDomainError("Value out of domain!");
    } catch (const MyDomainError& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
