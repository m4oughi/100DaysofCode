#include <iostream>
#include <memory>
#include <thread>

void print_shared_ptr(std::shared_ptr<int> ptr) {
    std::cout << "Value from thread: " << *ptr << std::endl;
}

int main() {
    // Create a shared_ptr to manage an integer
    std::shared_ptr<int> ptr = std::make_shared<int>(10);

    // Start two threads that share the ownership of the integer
    std::thread t1(print_shared_ptr, ptr);
    std::thread t2(print_shared_ptr, ptr);

    // Join the threads
    t1.join();
    t2.join();

    // The integer will be deleted automatically when the last shared_ptr goes out of scope

    return 0;
}
