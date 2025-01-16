#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::transform(numbers.begin(), numbers.end(), numbers.begin(),
                   [](int x) { return x * x; }); // Squares each element

    std::cout << "Squared elements: ";
    for (int num : numbers) std::cout << num << " ";
    return 0;
}
