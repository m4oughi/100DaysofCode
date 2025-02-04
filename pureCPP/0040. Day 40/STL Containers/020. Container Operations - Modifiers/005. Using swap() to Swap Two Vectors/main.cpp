#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    // Swapping the contents of vec1 and vec2
    vec1.swap(vec2);

    std::cout << "Vector 1 after swap: ";
    for (int n : vec1) std::cout << n << " "; // 4 5 6

    std::cout << "\nVector 2 after swap: ";
    for (int n : vec2) std::cout << n << " "; // 1 2 3

    return 0;
}
