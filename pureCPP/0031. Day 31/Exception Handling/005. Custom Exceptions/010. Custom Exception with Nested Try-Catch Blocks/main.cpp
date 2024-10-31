#include <iostream>
#include <exception>

class LevelOneException : public std::exception {
public:
    const char* what() const noexcept override {
        return "LevelOneException occurred!";
    }
};

class LevelTwoException : public std::exception {
public:
    const char* what() const noexcept override {
        return "LevelTwoException occurred!";
    }
};

void levelTwo() {
    throw LevelTwoException();  // Throwing LevelTwoException
}

void levelOne() {
    try {
        levelTwo();
    } catch (const LevelTwoException& e) {
        std::cout << "Caught in levelOne: " << e.what() << std::endl;
        throw LevelOneException();  // Rethrowing a different exception
    }
}

int main() {
    try {
        levelOne();
    } catch (const LevelOneException& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
