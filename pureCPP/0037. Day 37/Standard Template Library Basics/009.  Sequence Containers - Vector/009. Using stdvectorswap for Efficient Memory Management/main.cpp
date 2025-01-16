#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    vec1.swap(vec2);

    std::cout << "vec1: ";
    for (int val : vec1) std::cout << val << " ";
    
    std::cout << "\nvec2: ";
    for (int val : vec2) std::cout << val << " ";
    return 0;
}
