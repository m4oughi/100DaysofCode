#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40};

    auto hint = numbers.find(30); // Use iterator as hint
    auto it = numbers.insert(hint, 25); // Optimized insertion near 30

    std::cout << "Inserted value: " << *it << "\n";

    return 0;
}
