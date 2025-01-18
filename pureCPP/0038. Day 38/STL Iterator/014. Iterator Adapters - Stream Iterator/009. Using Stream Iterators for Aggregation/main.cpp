#include <iostream>
#include <iterator>
#include <numeric>

int main() {
    std::cout << "Enter integers to sum (end input with a non-integer): ";
    int sum = std::accumulate(std::istream_iterator<int>(std::cin), std::istream_iterator<int>(), 0);

    std::cout << "Sum of entered numbers: " << sum << std::endl;
    return 0;
}
