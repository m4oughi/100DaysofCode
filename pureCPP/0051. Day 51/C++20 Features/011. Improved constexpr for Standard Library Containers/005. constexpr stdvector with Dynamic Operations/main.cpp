#include <vector>
#include <iostream>

constexpr std::vector<int> generate_vector() {
    std::vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.push_back(5);
    return v;
}

int main() {
    constexpr std::vector<int> vec = generate_vector();

    for (int i : vec) {
        std::cout << i << " ";
    }
}
