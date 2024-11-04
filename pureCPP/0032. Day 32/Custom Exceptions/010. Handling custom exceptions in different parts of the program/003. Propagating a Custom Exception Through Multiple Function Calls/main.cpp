#include <iostream>
#include <exception>

class NestedException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Exception from a nested function!";
    }
};

void lowerLevel() {
    throw NestedException();
}

void middleLevel() {
    lowerLevel();
}

void topLevel() {
    middleLevel();
}

int main() {
    try {
        topLevel();
    } catch (const NestedException& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
