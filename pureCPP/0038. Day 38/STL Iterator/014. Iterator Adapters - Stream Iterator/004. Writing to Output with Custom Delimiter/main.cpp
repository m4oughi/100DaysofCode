#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Container with custom delimiter: ";
    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, ", "));

    return 0;
}
