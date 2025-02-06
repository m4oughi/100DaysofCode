#include <iostream>
#include <list>
#include <chrono>

class Test {
public:
    int x;
    Test(int val) : x(val) {}
};

int main() {
    std::list<Test> testList;
    
    auto start1 = std::chrono::high_resolution_clock::now();
    testList.emplace_back(100);
    auto end1 = std::chrono::high_resolution_clock::now();
    
    auto start2 = std::chrono::high_resolution_clock::now();
    testList.push_back(Test(100));  // Requires extra copy
    auto end2 = std::chrono::high_resolution_clock::now();

    std::cout << "Emplace Time: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - start1).count() << "ns\n";
    std::cout << "Push Time: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - start2).count() << "ns\n";

    return 0;
}
