#include <iostream>
#include <thread>

void modifyValue(int& x) {
    x += 10;
}

int main() {
    int value = 5;
    std::cout << "Before thread: " << value << std::endl;

    std::thread t(modifyValue, std::ref(value));
    t.join();

    std::cout << "After thread: " << value << std::endl;
    return 0;
}
