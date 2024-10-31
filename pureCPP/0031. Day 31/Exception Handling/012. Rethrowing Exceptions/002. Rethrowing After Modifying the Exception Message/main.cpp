#include <iostream>
#include <stdexcept>

void process() {
    try {
        throw std::runtime_error("Initial error in process");
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in process: " << e.what() << std::endl;
        throw std::runtime_error(std::string("Modified error: ") + e.what());
    }
}

int main() {
    try {
        process();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
