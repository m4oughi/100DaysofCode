#include <iostream>
#include <iterator>
#include <numeric>

int main() {
    std::cout << "Enter integers to sum (end with EOF or Ctrl+D): ";
    std::istream_iterator<int> inputIt(std::cin), end;

    int sum = std::accumulate(inputIt, end, 0);

    std::cout << "Sum of entered values: " << sum << "\n";
    return 0;
}
