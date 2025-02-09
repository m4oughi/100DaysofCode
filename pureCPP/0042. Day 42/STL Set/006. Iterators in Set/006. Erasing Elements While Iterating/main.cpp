#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.begin();
    while (it != numbers.end()) {
        if (*it % 20 == 0) { // Remove multiples of 20
            it = numbers.erase(it); // Returns iterator to next element
        } else {
            ++it;
        }
    }

    std::cout << "Set after erasing multiples of 20: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
