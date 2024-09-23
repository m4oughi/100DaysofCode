#include <iostream>
#include <thread>

void printValue(int& x) {
    x += 10;
    std::cout << "Value in thread: " << x << std::endl;
}

int main() {
    int n = 5;

    std::thread t(printValue, std::ref(n)); // Pass 'n' by reference using std::ref

    t.join(); // Waits for the thread to finish
    std::cout << "Value in main: " << n << std::endl; // Outputs: Value in main: 15

    return 0;
}
