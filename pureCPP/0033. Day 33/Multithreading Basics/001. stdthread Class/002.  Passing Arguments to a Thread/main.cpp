#include <iostream>
#include <thread>

void printNumber(int x) {
    std::cout << "Number: " << x << std::endl;
}

int main() {
    std::thread t1(printNumber, 10); // Pass 10 as an argument to the thread
    t1.join();
    return 0;
}
