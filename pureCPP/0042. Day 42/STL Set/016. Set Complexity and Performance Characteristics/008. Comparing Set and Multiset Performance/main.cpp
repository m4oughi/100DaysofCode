#include <iostream>
#include <set>
#include <chrono>

int main() {
    std::set<int> s;
    std::multiset<int> ms;

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; i++) s.insert(i);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Set insertion time: " 
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; i++) ms.insert(i);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Multiset insertion time: " 
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    return 0;
}
