#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Output iterator for standard output
    std::ostream_iterator<int> output(std::cout, " ");
    for (const auto& num : numbers) {
        *output = num; // Writing each number to std::cout
    }

    return 0;
}
