#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::cout << "Enter integers (end with EOF or Ctrl+D): ";
    std::istream_iterator<int> inputIt(std::cin);
    std::istream_iterator<int> end;

    std::vector<int> numbers(inputIt, end);

    std::cout << "You entered: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    std::cout << "\n";
    return 0;
}
