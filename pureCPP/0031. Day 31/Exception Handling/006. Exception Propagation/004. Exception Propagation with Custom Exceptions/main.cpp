#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "MyException occurred!";
    }
};

class AnotherException : public std::exception {
public:
    const char* what() const noexcept override {
        return "AnotherException occurred!";
    }
};

void level2() {
    throw MyException();  // Throwing custom exception
}

void level1() {
    try {
        level2();
    } catch (const MyException& e) {
        std::cout << "Caught in level1: " << e.what() << std::endl;
        throw AnotherException();  // Throwing another custom exception
    }
}

int main() {
    try {
        level1();
    } catch (const AnotherException& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
