#include <iostream>
#include <mutex>

std::recursive_mutex r_mtx;

void recursiveFunction(int count) {
    if (count <= 0) return;
    std::lock_guard<std::recursive_mutex> guard(r_mtx); // Recursive lock
    std::cout << "Recursive lock acquired, count: " << count << "\n";
    recursiveFunction(count - 1); // Recursive call
    // Lock is automatically released at each level when guard goes out of scope
}

int main() {
    recursiveFunction(3);
    return 0;
}
