#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30};

    std::cout << "Initial size: " << vec.size() << "\n"; // 3

    // Resize to a larger size
    vec.resize(5, 50);
    std::cout << "Resized to larger size: " << vec.size() << "\n"; // 5
    for (int i : vec) std::cout << i << " "; // 10 20 30 50 50

    return 0;
}
