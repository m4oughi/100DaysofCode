#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30};
    numbers.erase(20);  // Remove the element 20

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
