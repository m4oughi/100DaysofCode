#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {10, 20, 30};

    vec1.swap(vec2);

    std::cout << "After swap:\n";
    std::cout << "vec1: ";
    for (int v : vec1) std::cout << v << " ";
    std::cout << "\n";

    std::cout << "vec2: ";
    for (int v : vec2) std::cout << v << " ";
    std::cout << "\n";

    return 0;
}
