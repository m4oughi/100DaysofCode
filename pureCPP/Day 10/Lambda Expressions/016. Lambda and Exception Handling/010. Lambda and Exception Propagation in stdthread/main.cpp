#include <iostream>
#include <thread>
#include <exception>

void threadFunction(std::exception_ptr& eptr) {
    try {
        throw std::runtime_error("Exception in thread!");
    } catch (...) {
        eptr = std::current_exception(); // Capture the exception
    }
}

int main() {
    std::exception_ptr eptr;

    std::thread t([&eptr]() {
        threadFunction(eptr);
    });

    t.join();

    try {
        if (eptr) {
            std::rethrow_exception(eptr); // Rethrow the captured exception
        }
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl; // Outputs: Caught exception: Exception in thread!
    }

    return 0;
}
