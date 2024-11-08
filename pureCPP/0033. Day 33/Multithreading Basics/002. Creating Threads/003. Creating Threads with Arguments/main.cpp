#include <iostream>
#include <thread>

void addNumbers(int a, int b) {
    std::cout << "Sum: " << (a + b) << std::endl;
}

int main() {
    std::thread t1(addNumbers, 5, 10); // Passing 5 and 10 as arguments
    t1.join();
    return 0;
}
