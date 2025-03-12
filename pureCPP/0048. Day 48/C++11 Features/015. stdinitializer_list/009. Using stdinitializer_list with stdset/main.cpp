#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {7, 3, 8, 1, 5};

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    return 0;
}
