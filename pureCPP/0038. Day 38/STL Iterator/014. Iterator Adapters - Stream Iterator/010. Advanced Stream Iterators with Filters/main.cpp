#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::cout << "Enter integers (end input with a non-integer): ";
    std::vector<int> numbers(std::istream_iterator<int>(std::cin), std::istream_iterator<int>());

    std::cout << "Even numbers: ";
    std::copy_if(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "), [](int x) {
        return x % 2 == 0;
    });

    return 0;
}
