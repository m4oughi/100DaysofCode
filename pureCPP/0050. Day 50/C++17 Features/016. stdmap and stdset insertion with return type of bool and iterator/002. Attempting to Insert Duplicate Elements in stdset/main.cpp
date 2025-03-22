#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 2, 3};

    auto [it, success] = numbers.insert(2); // Try inserting duplicate

    if (success) {
        std::cout << "Inserted: " << *it << "\n";
    } else {
        std::cout << "Insertion failed, duplicate detected at: " << *it << "\n";
    }

    return 0;
}
