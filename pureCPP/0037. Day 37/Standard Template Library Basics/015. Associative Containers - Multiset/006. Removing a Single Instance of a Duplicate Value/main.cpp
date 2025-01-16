#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {10, 20, 20, 30};

    auto it = numbers.find(20);  // Finds one instance of 20
    if (it != numbers.end()) {
        numbers.erase(it);  // Erase only one occurrence
    }

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
