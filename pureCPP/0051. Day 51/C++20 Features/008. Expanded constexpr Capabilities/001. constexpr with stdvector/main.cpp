#include <iostream>
#include <vector>

constexpr std::vector<int> generateVector() {
    std::vector<int> v{1, 2, 3, 4, 5};
    v.push_back(6);
    return v;
}

int main() {
    constexpr auto vec = generateVector();
    std::cout << "Size of constexpr vector: " << vec.size() << "\n";
}
