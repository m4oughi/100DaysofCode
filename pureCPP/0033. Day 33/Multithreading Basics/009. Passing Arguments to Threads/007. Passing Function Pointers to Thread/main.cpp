#include <iostream>
#include <thread>

void display(int a, int b) {
    std::cout << "Sum: " << a + b << std::endl;
}

int main() {
    void (*funcPtr)(int, int) = display;
    
    std::thread t(funcPtr, 10, 20); // Passing function pointer with arguments
    t.join();
    
    return 0;
}
