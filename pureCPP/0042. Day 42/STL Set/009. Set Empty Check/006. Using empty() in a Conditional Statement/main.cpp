#include <iostream>
#include <set>

void checkSet(const std::set<int>& numbers) {
    if (numbers.empty()) {
        std::cout << "Set is empty!" << std::endl;
    } else {
        std::cout << "Set has elements. Size: " << numbers.size() << std::endl;
    }
}

int main() {
    std::set<int> numbers = {10, 20, 30};
    checkSet(numbers);

    numbers.clear();
    checkSet(numbers);

    return 0;
}
