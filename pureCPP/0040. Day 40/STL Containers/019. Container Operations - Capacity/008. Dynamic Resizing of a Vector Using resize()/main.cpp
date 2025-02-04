#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3};

    std::cout << "Initial vector: ";
    for (int n : vec) std::cout << n << " "; // 1 2 3
    std::cout << "\n";

    vec.resize(5, 10);  // Resize and add 10 to new elements
    std::cout << "Resized vector: ";
    for (int n : vec) std::cout << n << " "; // 1 2 3 10 10

    return 0;
}
