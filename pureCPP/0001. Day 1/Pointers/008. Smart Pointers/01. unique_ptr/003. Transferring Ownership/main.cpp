#include <iostream>
#include <memory>

int main() {
    // Create a unique_ptr to manage a dynamically allocated integer
    std::unique_ptr<int> ptr1(new int(100));

    // Transfer ownership from ptr1 to ptr2 using std::move
    std::unique_ptr<int> ptr2 = std::move(ptr1);

    if (ptr1 == nullptr) {
        std::cout << "ptr1 is now nullptr after move." << std::endl;
    }

    std::cout << "Value in ptr2: " << *ptr2 << std::endl;  // Output: Value in ptr2: 100

    // Memory will be automatically released when ptr2 goes out of scope

    return 0;
}
