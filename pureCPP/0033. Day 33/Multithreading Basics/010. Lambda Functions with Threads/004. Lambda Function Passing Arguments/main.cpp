#include <iostream>
#include <thread>

int main() {
    std::thread t([](int a, int b) {
        std::cout << "Sum: " << a + b << std::endl;
    }, 3, 7);
    t.join();
    return 0;
}
