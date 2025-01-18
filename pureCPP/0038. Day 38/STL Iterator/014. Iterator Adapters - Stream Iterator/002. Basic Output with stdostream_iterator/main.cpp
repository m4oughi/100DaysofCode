#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    std::cout << "Container contents: ";
    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
