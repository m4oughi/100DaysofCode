#include <iostream>
#include <chrono>

int main() {
    const int size = 1000000;

    // Stack allocation
    auto startStack = std::chrono::high_resolution_clock::now();
    int stackArray[size];  // Stack allocation
    auto endStack = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durationStack = endStack - startStack;
    std::cout << "Stack allocation time: " << durationStack.count() << " seconds" << std::endl;

    // Heap allocation
    auto startHeap = std::chrono::high_resolution_clock::now();
    int* heapArray = new int[size];  // Heap allocation
    auto endHeap = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durationHeap = endHeap - startHeap;
    std::cout << "Heap allocation time: " << durationHeap.count() << " seconds" << std::endl;

    delete[] heapArray;  // Manual deallocation for heapArray
}
