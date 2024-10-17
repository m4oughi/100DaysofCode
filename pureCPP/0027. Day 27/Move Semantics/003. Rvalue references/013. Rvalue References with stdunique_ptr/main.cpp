#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> p1 = std::make_unique<int>(42);
    std::unique_ptr<int> p2 = std::move(p1);  // Transfer ownership from p1 to p2

    if (!p1) std::cout << "p1 is null" << std::endl;
    if (p2) std::cout << "p2 points to: " << *p2 << std::endl;
}
