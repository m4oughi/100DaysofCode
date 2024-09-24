#include <iostream>

struct Logger {
    std::string message;
    mutable int logCount;

    void log() const {
        ++logCount;
        std::cout << "Log: " << message << std::endl;
    }
};


int main() {


    return 0;
}