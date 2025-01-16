#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};

    std::cout << "Size: " << vec.size() << "\n";
    std::cout << "Max size: " << vec.max_size() << "\n";

    return 0;
}
