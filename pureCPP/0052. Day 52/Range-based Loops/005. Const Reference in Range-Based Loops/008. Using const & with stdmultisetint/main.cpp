#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {4, 2, 2, 3, 1};

    for (const int& num : numbers) { // Read-only iteration
        std::cout << num << " ";
    }

    return 0;
}
