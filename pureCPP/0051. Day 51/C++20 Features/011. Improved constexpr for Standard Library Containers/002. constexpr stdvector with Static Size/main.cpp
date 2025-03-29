#include <vector>
#include <iostream>

constexpr std::vector<int> make_vector() {
    return {1, 2, 3, 4, 5};
}

int main() {
    constexpr std::vector<int> vec = make_vector();

    for (int i : vec) {
        std::cout << i << " ";
    }
}
