#include <iostream>
#include <stdexcept>

void compute(int num) {
    if (num == 0) {
        throw std::logic_error("Logical error: Cannot process zero");
    }
    if (num < 0) {
        throw std::runtime_error("Runtime error: Negative number detected");
    }
}

int main() {
    try {
        compute(-5);
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
