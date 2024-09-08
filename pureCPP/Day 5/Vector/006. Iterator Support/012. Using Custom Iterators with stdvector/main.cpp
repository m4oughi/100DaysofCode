#include <iostream>
#include <vector>
#include <iterator>

template <typename Iterator>
void print_reverse(Iterator begin, Iterator end) {
    while (begin != end) {
        --end;
        std::cout << *end << " ";
    }
}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Elements in reverse order using custom iterator function:" << std::endl;
    print_reverse(numbers.begin(), numbers.end());

    return 0;
}
