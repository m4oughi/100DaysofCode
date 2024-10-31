#include <iostream>
#include <exception>

class ExceptionOne : public std::exception {
public:
    const char* what() const noexcept override {
        return "ExceptionOne occurred!";
    }
};

class ExceptionTwo : public std::exception {
public:
    const char* what() const noexcept override {
        return "ExceptionTwo occurred!";
    }
};

int main() {
    try {
        throw ExceptionTwo();  // Throwing ExceptionTwo
    } catch (const ExceptionOne& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    } catch (const ExceptionTwo& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
