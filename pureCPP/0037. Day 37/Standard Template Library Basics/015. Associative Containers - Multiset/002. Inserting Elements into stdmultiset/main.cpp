#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers;
    numbers.insert(3);
    numbers.insert(1);
    numbers.insert(2);
    numbers.insert(3);  // Allows duplicate values

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
