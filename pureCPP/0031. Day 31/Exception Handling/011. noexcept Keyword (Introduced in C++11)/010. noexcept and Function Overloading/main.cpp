#include <iostream>

void process() noexcept {
    std::cout << "Noexcept overload." << std::endl;
}

void process() {
    std::cout << "Regular overload (can throw)." << std::endl;
    throw std::runtime_error("Exception in process()");
}

int main() {
    try {
        process();  // Calls the regular overload
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
