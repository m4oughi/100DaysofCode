#include <iostream>
#include <deque>

int main() {
    std::deque<int> source = {10, 20, 30, 40, 50, 60};
    std::deque<int> target;

    target.assign(source.begin() + 2, source.end() - 1); // Copy {30, 40, 50}

    std::cout << "After assigning subrange: ";
    for (int num : target) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
