#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;

    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);

    std::cout << "Set elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
