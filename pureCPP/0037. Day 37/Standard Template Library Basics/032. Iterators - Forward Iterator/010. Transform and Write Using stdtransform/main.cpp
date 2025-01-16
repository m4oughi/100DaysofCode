#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Squared elements: ";
    std::transform(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "), [](int n) {
        return n * n;
    });
    std::cout << "\n";

    return 0;
}
