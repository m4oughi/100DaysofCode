#include <iostream>
#include <thread>

int main() {
    std::thread t1([]() {
        std::cout << "Hello from the lambda thread!" << std::endl;
    });

    t1.join();
    return 0;
}
