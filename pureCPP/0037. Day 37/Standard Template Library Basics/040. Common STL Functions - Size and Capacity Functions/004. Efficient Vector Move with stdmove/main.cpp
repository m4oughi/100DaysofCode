#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4};
    std::vector<int> vec2 = std::move(vec1);

    std::cout << "After move:\n";
    std::cout << "vec1 size: " << vec1.size() << "\n"; // vec1 is empty
    std::cout << "vec2 elements: ";
    for (int v : vec2) std::cout << v << " ";

    return 0;
}
