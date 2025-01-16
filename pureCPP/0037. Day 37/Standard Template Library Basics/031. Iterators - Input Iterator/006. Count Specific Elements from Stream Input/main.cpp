#include <iostream>
#include <iterator>
#include <algorithm>

int main() {
    std::cout << "Enter integers (end with EOF or Ctrl+D): ";
    std::istream_iterator<int> inputIt(std::cin), end;

    int target = 5; // Element to count
    int count = std::count(inputIt, end, target);

    std::cout << "Count of " << target << ": " << count << "\n";
    return 0;
}
