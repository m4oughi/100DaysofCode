#include <iostream>
#include <memory>

void modifyValue(std::shared_ptr<int> &ptr) {
    *ptr = 200;  // Modify the value pointed to by shared_ptr
}

int main() {
    std::shared_ptr<int> sp = std::make_shared<int>(100);
    modifyValue(sp);  // Pass shared_ptr by reference
    
    std::cout << *sp << std::endl;  // Output: 200

    return 0;
}