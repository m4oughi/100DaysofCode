#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Set elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
