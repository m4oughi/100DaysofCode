#include <iostream>
#include <memory>

int main() {
    // Create a shared_ptr to manage a dynamically allocated integer
    std::shared_ptr<int> ptr1(new int(200));

    // Create another shared_ptr that shares ownership with ptr1
    std::shared_ptr<int> ptr2 = ptr1;

    std::cout << "Value from ptr1: " << *ptr1 << std::endl;  // Output: Value from ptr1: 200
    std::cout << "Value from ptr2: " << *ptr2 << std::endl;  // Output: Value from ptr2: 200

    // The object will be deleted automatically when the last shared_ptr (ptr1 and ptr2) goes out of scope

    return 0;
}
