#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    auto it1 = numbers.begin();
    auto it2 = numbers.end() - 1;

    numbers.erase(it1); // Invalidates it1 but not it2 if pointing to different elements

    std::cout << "Last element: " << *it2 << std::endl; // Safe if it2 remains valid

    std::cout << "Vector after erasing first element: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
