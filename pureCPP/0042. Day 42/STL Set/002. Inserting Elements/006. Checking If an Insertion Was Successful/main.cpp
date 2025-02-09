#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;

    auto result = numbers.insert(10);
    if (result.second) {
        std::cout << "Inserted 10 successfully.\n";
    } else {
        std::cout << "10 was already in the set.\n";
    }

    return 0;
}
