#include <iostream>
#include <list>
#include <memory>  // For std::allocator

int main() {
    std::allocator<int> alloc;
    std::list<int> myList;

    // Allocating and constructing elements manually
    for (int i = 1; i <= 5; ++i) {
        int* p = alloc.allocate(1);  // Allocate space for 1 element
        alloc.construct(p, i);  // Construct the element
        myList.push_back(*p);    // Push the element into the list
        alloc.deallocate(p, 1);  // Deallocate the memory after use
    }

    // Output the list elements
    std::cout << "List elements: ";
    for (const auto& val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
