#include <iostream>
#include <thread>

int main() {
    int x = 10;
    std::thread t([x]() {
        std::cout << "Captured by value, x = " << x << std::endl;
    });
    t.join();
    return 0;
}
