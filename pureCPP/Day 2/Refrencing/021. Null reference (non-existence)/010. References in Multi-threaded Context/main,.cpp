#include <iostream>
#include <thread>

void printValue(const int& value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    int x = 50;
    std::thread t(printValue, std::ref(x));  // Pass reference to thread
    t.join();

    return 0;
}
