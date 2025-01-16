#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {10, 20, 20, 30};
    numbers.erase(20);  // Removes all occurrences of 20

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
