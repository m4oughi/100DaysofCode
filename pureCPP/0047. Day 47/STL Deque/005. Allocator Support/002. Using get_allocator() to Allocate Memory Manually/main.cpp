#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Get the allocator of deque
    std::deque<int>::allocator_type alloc = dq.get_allocator();

    // Allocate memory for 5 integers
    int* arr = alloc.allocate(5);

    // Construct values manually
    for (int i = 0; i < 5; ++i)
        alloc.construct(&arr[i], i * 10);  // Construct elements

    std::cout << "Allocated values: ";
    for (int i = 0; i < 5; ++i)
        std::cout << arr[i] << " ";

    // Destroy and deallocate memory
    for (int i = 0; i < 5; ++i)
        alloc.destroy(&arr[i]);

    alloc.deallocate(arr, 5);  // Free memory

    return 0;
}
