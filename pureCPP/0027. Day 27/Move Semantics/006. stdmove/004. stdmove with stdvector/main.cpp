#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = std::move(vec1);  // Transfer contents of vec1 to vec2

    std::cout << "vec1 size: " << vec1.size() << std::endl;  // vec1 is empty after move
    std::cout << "vec2 size: " << vec2.size() << std::endl;
}
