#include <iostream>
#include <memory>
#include <vector>

int main() {
    // Use custom allocator with a vector
    auto customAllocator = [](std::size_t size) { return new int[size]; };
    auto customDeallocator = [](int* ptr) { delete[] ptr; };

    std::shared_ptr<int> arrayPtr(customAllocator(5), customDeallocator);
    for (int i = 0; i < 5; ++i) {
        arrayPtr.get()[i] = i * 20;
    }

    // Alias pointer to a specific element in the array
    std::shared_ptr<int> aliasPtr(arrayPtr, &arrayPtr.get()[3]);

    std::cout << "Fourth element via alias: " << *aliasPtr << std::endl;

    return 0;
}
