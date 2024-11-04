#include <iostream>
#include <exception>

class SimpleException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Simple custom exception occurred!";
    }
};

int main() {
    try {
        throw SimpleException();
    } catch (const SimpleException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
