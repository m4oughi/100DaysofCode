#include <iostream>
#include <thread>

void printValue(int x) {
    std::cout << "Value passed to thread: " << x << std::endl;
}

int main() {
    std::thread t(printValue, 42);
    t.join();
    return 0;
}
