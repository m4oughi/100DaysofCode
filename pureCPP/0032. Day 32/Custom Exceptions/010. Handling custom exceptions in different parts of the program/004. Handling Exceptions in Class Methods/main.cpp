#include <iostream>
#include <exception>

class ClassException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Exception in class method!";
    }
};

class MyClass {
public:
    void throwException() {
        throw ClassException();
    }
};

int main() {
    MyClass obj;
    try {
        obj.throwException();
    } catch (const ClassException& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
