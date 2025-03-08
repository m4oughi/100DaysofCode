#include <iostream>
#include <deque>

int main() {
    std::deque<int> original = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Construct deque from a subset (middle 5 elements)
    std::deque<int> subset(original.begin() + 2, original.begin() + 7);

    std::cout << "Subset deque: ";
    for (int num : subset) {
        std::cout << num << " ";
    }

    return 0;
}
