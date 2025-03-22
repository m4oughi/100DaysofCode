#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;
    
    auto [it, success] = numbers.insert(10); // C++17 structured binding

    if (success) {
        std::cout << "Inserted: " << *it << "\n";
    } else {
        std::cout << "Insertion failed, value already exists!\n";
    }

    return 0;
}
