#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Erase an element at index 2 (third element)
    vec.erase(vec.begin() + 2);

    std::cout << "Vector after erase: ";
    for (int n : vec) std::cout << n << " "; // 10 20 40 50

    return 0;
}
