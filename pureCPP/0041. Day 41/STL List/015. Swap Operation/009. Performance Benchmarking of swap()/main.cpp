#include <iostream>
#include <list>
#include <chrono>

int main() {
    std::list<int> largeList1(1000000, 5);
    std::list<int> largeList2(1000000, 10);

    auto start = std::chrono::high_resolution_clock::now();
    largeList1.swap(largeList2);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Time taken to swap large lists: "
              << std::chrono::duration<double, std::milli>(end - start).count()
              << " ms\n";

    return 0;
}
