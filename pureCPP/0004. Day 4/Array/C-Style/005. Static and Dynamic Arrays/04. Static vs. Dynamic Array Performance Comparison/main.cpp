#include <iostream>
#include <chrono>

int main() {
    const int size = 1000000;

    // Static array
    auto startStatic = std::chrono::high_resolution_clock::now();
    int staticArray[size];
    for (int i = 0; i < size; ++i) {
        staticArray[i] = i;
    }
    auto endStatic = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durationStatic = endStatic - startStatic;
    std::cout << "Static array time: " << durationStatic.count() << " seconds" << std::endl;

    // Dynamic array
    auto startDynamic = std::chrono::high_resolution_clock::now();
    int* dynamicArray = new int[size];
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i;
    }
    auto endDynamic = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durationDynamic = endDynamic - startDynamic;
    std::cout << "Dynamic array time: " << durationDynamic.count() << " seconds" << std::endl;

    delete[] dynamicArray;
}
