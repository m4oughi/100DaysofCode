#include <iostream>
#include <exception>

class FunctionException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Exception from one function!";
    }
};

void throwError() {
    throw FunctionException();
}

void handleError() {
    try {
        throwError();
    } catch (const FunctionException& e) {
        std::cout << "Caught in handleError: " << e.what() << std::endl;
    }
}

int main() {
    handleError();
    return 0;
}
