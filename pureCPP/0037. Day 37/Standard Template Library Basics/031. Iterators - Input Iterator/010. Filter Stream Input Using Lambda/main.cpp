#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "Enter integers (end with EOF or Ctrl+D): ";
    std::istream_iterator<int> inputIt(std::cin), end;

    std::vector<int> numbers(inputIt, end);

    std::vector<int> filtered;
    std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(filtered), [](int n) { return n % 2 == 0; });

    std::cout << "Even numbers: ";
    for (int num : filtered) {
        std::cout << num << " ";
    }

    std::cout << "\n";
    return 0;
}
