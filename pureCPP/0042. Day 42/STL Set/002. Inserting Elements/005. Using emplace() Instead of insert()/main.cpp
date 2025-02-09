#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;

    numbers.emplace(10);
    numbers.emplace(20);
    numbers.emplace(30);

    std::cout << "Set elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
