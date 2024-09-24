#include <iostream>
#include <thread>

void printValue(int x) {
    std::cout << "Value: " << x << std::endl;
}

int main() {
    int num = 10;
    
    std::thread t1(printValue, num);  // Pass by value to a thread
    t1.join();
    
    return 0;
}
