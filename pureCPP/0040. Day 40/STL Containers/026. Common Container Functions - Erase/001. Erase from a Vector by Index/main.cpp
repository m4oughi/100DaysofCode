#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};

    // Erase the element at index 1 (i.e., 20)
    vec.erase(vec.begin() + 1);

    // Output the vector after erase
    std::cout << "Vector after erase: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
