#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {5, 10, 15, 20};

    auto it1 = vec.begin();
    auto it2 = vec.end() - 1;

    std::cout << "it1 < it2: " << (it1 < it2) << "\n";
    std::cout << "it2 - it1: " << (it2 - it1) << " steps\n";

    return 0;
}
