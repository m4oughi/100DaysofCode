#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    bool exists = std::binary_search(numbers.begin(), numbers.end(), 30);

    std::cout << "30 exists in the vector: " << std::boolalpha << exists << "\n";

    return 0;
}
