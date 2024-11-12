#include <iostream>
#include <mutex>

std::mutex mtx;

void simpleFunction() {
    std::lock_guard<std::mutex> guard(mtx); // Locks the mutex
    std::cout << "Lock acquired by simpleFunction\n";
    // mtx will automatically unlock when guard goes out of scope
}

int main() {
    simpleFunction();
    return 0;
}
