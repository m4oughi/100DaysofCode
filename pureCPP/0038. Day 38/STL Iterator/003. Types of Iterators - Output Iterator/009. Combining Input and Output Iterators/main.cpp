#include <iostream>
#include <iterator>
#include <algorithm>

int main() {
    std::cout << "Enter numbers (terminate with non-numeric input): ";
    
    std::istream_iterator<int> input(std::cin);
    std::istream_iterator<int> end;
    std::ostream_iterator<int> output(std::cout, " ");

    std::copy(input, end, output);

    return 0;
}
