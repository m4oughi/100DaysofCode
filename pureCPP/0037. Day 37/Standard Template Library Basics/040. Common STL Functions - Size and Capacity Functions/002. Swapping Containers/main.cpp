#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    std::cout << "Before swap:\n";
    std::cout << "vec1: ";
    for (int v : vec1) std::cout << v << " ";
    std::cout << "\nvec2: ";
    for (int v : vec2) std::cout << v << " ";

    std::swap(vec1, vec2);

    std::cout << "\nAfter swap:\n";
    std::cout << "vec1: ";
    for (int v : vec1) std::cout << v << " ";
    std::cout << "\nvec2: ";
    for (int v : vec2) std::cout << v << " ";

    return 0;
}
