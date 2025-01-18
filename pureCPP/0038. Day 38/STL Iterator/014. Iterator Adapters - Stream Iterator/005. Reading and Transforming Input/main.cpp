#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::cout << "Enter integers (end input with a non-integer): ";
    std::vector<int> numbers(std::istream_iterator<int>(std::cin), std::istream_iterator<int>());

    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int x) { return x * 2; });

    std::cout << "Doubled values: ";
    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
