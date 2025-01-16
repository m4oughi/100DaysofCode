#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "Enter integers (end with EOF or Ctrl+D): ";
    std::istream_iterator<int> inputIt(std::cin), end;
    std::vector<int> numbers;

    std::copy(inputIt, end, std::back_inserter(numbers));

    std::cout << "Copied values: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    std::cout << "\n";
    return 0;
}
