#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {1, 2, 2, 3, 3, 3, 4};

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
