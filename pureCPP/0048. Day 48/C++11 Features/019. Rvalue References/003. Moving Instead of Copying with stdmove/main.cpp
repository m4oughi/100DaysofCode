#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = std::move(v1); // Move v1 to v2

    std::cout << "Size of v1: " << v1.size() << std::endl; // v1 is now empty
    std::cout << "Size of v2: " << v2.size() << std::endl;

    return 0;
}
