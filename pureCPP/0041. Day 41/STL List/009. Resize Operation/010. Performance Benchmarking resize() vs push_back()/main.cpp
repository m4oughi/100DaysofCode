#include <iostream>
#include <list>
#include <chrono>

int main() {
    std::list<int> myList;

    auto start1 = std::chrono::high_resolution_clock::now();
    myList.resize(1000, 42);
    auto end1 = std::chrono::high_resolution_clock::now();

    myList.clear();
    
    auto start2 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000; ++i) {
        myList.push_back(42);
    }
    auto end2 = std::chrono::high_resolution_clock::now();

    std::cout << "Resize Time: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - start1).count() << "ns\n";
    std::cout << "Push Time: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - start2).count() << "ns\n";

    return 0;
}
