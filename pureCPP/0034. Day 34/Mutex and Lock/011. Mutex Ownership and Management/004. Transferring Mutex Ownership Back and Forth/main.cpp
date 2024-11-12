#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void transferBack(std::unique_lock<std::mutex>& ul) {
    std::cout << "Ownership transferred back to main function.\n";
}

void transferBackAndForth() {
    std::unique_lock<std::mutex> ul(mtx); // Initial lock acquisition
    transferBack(ul); // Pass by reference to transfer ownership temporarily
}

int main() {
    transferBackAndForth();
    return 0;
}
