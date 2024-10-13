#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1;

    {
        std::shared_ptr<int> ptr2 = std::make_shared<int>(60);
        ptr1 = ptr2; // both ptr1 and ptr2 share ownership
        std::cout << "Use count: " << ptr1.use_count() << std::endl; // use count is 2
    } // ptr2 goes out of scope, but memory is not released because ptr1 still owns it

    std::cout << "Use count after ptr2 is out of scope: " << ptr1.use_count() << std::endl; // use count is 1

    return 0;
}
