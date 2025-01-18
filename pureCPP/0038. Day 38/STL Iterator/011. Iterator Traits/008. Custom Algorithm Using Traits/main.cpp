#include <iostream>
#include <vector>
#include <iterator>

template <typename Iterator>
typename std::iterator_traits<Iterator>::value_type sumElements(Iterator begin, Iterator end) {
    using ValueType = typename std::iterator_traits<Iterator>::value_type;
    ValueType sum = 0;

    while (begin != end) {
        sum += *begin;
        ++begin;
    }

    return sum;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Sum of elements: " << sumElements(vec.begin(), vec.end()) << std::endl;

    return 0;
}
