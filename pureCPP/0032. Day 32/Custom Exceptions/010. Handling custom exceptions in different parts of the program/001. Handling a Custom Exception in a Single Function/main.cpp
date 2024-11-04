#include <iostream>
#include <exception>

class SimpleException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Simple Exception occurred!";
    }
};

void process() {
    try {
        throw SimpleException();
    } catch (const SimpleException& e) {
        std::cout << "Caught in process: " << e.what() << std::endl;
    }
}

int main() {
    process();
    return 0;
}
