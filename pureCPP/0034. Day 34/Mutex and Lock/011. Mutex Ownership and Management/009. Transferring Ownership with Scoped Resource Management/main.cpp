#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

std::mutex resourceMutex;

void manageResource(std::unique_lock<std::mutex> ul) {
    std::cout << "Resource being managed in function.\n";
    // Resource released as function exits
}

void transferScopedOwnership() {
    std::unique_lock<std::mutex> ul(resourceMutex); // Initial ownership
    std::cout << "Scoped ownership transferred to manageResource.\n";

    manageResource(std::move(ul)); // Transfer ownership to function
    std::cout << "Back in main, ownership transferred.\n";
}

int main() {
    transferScopedOwnership();
    return 0;
}
