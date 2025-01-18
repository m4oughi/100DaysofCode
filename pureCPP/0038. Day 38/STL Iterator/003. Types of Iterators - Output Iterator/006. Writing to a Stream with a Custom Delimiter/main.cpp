#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> numbers = {100, 200, 300, 400};

    std::ostream_iterator<int> output(std::cout, ", ");
    for (const auto& num : numbers) {
        *output = num;
    }

    return 0;
}
