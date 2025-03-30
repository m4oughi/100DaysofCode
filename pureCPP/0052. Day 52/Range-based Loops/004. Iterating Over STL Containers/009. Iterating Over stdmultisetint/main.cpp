#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {3, 1, 2, 3, 4, 1};

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
