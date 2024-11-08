#include <iostream>
#include <thread>
#include <exception>

void throwError() {
    throw std::runtime_error("Exception in thread");
}

int main() {
    try {
        std::thread t1(throwError);
        t1.join(); // Exception does not propagate here
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
