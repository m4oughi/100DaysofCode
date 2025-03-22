#include <iostream>
#include <array>
#include <vector>

struct Container {
    std::array<int, 3> arr;
    std::vector<int> vec;
};

int main() {
    Container c{{1, 2, 3}, {4, 5, 6}}; // Nested aggregate initialization
    std::cout << "arr: " << c.arr[0] << ", " << c.arr[1] << ", " << c.arr[2] << "\n";
    std::cout << "vec: " << c.vec[0] << ", " << c.vec[1] << ", " << c.vec[2] << "\n";
    return 0;
}
