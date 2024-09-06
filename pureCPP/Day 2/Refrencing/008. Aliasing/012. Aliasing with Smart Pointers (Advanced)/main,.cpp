#include <iostream>
#include <memory>

std::shared_ptr<int> createSharedPointer(int value) {
    return std::make_shared<int>(value);
}

int main() {
    std::shared_ptr<int> ptr1 = createSharedPointer(500);
    std::shared_ptr<int> ptr2 = ptr1;  // alias ptr1

    int &alias = *ptr1;  // alias to the object pointed by ptr1
    alias = 600;  // Modify the resource through alias
    std::cout << *ptr2 << std::endl;  // Output: 600 (ptr2 reflects the change)

    return 0;
}