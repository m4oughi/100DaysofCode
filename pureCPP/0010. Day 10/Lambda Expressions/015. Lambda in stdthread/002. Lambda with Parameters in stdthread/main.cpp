#include <iostream>
#include <thread>

int main() {
    std::thread t([](int x, int y) {
        std::cout << "Sum: " << x + y << std::endl;
    }, 5, 3); // Pass 5 and 3 as arguments to the lambda

    t.join(); // Waits for the thread to finish
    return 0;
}
