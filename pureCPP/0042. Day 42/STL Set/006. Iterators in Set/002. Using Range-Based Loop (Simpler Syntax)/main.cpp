#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 15, 25, 35};

    std::cout << "Set elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
