#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 4, 5};

    vec.insert(vec.begin() + 2, 3); // Insert 3 at index 2
    std::cout << "After insert: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    return 0;
}
