#include <iostream>
#include <stdexcept>

void process(int value) {
    if (value == 0) {
        throw std::runtime_error("Runtime error: Division by zero");
    }
    throw std::exception();
}

int main() {
    try {
        process(0);
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught general exception: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught unknown exception" << std::endl;
    }
    return 0;
}
