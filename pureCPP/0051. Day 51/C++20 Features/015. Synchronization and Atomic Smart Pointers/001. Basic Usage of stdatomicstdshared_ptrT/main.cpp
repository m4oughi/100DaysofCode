#include <iostream>
#include <memory>
#include <atomic>

int main() {
    std::shared_ptr<int> sp1 = std::make_shared<int>(42);
    std::atomic<std::shared_ptr<int>> atomic_sp(sp1);

    std::shared_ptr<int> sp2 = atomic_sp.load();  // Load the atomic shared pointer safely
    std::cout << "Value: " << *sp2 << '\n';
}
