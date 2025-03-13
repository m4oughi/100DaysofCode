#include <iostream>
#include <thread>

int main() {
    int data = 42;

    std::thread t([val = data]() {
        std::cout << "Captured value in thread: " << val << std::endl;
    });

    t.join(); // Output: Captured value in thread: 42

    return 0;
}
