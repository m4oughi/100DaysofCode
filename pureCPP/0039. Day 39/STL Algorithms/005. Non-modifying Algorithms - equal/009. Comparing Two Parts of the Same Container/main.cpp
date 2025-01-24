#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 1, 2, 3};

    bool isSymmetric = std::equal(numbers.begin(), numbers.begin() + numbers.size() / 2, 
                                  numbers.begin() + numbers.size() / 2);

    std::cout << (isSymmetric ? "The container is symmetric." : "The container is not symmetric.") << std::endl;

    return 0;
}
