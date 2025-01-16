#include <iostream>
#include <iterator>
#include <algorithm>
#include <limits>

int main() {
    std::cout << "Enter integers to find min and max (end with EOF or Ctrl+D): ";
    std::istream_iterator<int> inputIt(std::cin), end;

    auto [minIt, maxIt] = std::minmax_element(inputIt, end);

    if (minIt != end && maxIt != end) {
        std::cout << "Minimum: " << *minIt << "\n";
        std::cout << "Maximum: " << *maxIt << "\n";
    } else {
        std::cout << "No valid input provided.\n";
    }

    return 0;
}
