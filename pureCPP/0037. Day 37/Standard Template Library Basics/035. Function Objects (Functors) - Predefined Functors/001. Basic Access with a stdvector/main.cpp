#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    auto it = vec.begin(); // Random-Access Iterator

    std::cout << "First element: " << *it << "\n";
    std::cout << "Third element: " << *(it + 2) << "\n"; // Access the third element

    return 0;
}
