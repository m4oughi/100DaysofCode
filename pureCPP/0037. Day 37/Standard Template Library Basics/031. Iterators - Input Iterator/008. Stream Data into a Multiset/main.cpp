#include <iostream>
#include <iterator>
#include <set>

int main() {
    std::cout << "Enter integers (end with EOF or Ctrl+D): ";
    std::istream_iterator<int> inputIt(std::cin), end;

    std::multiset<int> numbers(inputIt, end);

    std::cout << "Elements in sorted multiset: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    std::cout << "\n";
    return 0;
}
