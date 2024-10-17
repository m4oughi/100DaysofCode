#include <iostream>
#include <memory>
#include <utility>

int main() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(50);
    std::unique_ptr<int> ptr2 = std::make_unique<int>(60);
    
    std::cout << "Before swap: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << std::endl;
    
    std::swap(ptr1, ptr2);  // Efficient swap using std::move semantics
    
    std::cout << "After swap: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << std::endl;
}
