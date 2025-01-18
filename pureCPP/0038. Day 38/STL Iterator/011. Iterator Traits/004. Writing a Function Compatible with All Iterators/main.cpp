#include <iostream>
#include <iterator>
#include <vector>
#include <list>

template <typename Iterator>
void printElements(Iterator begin, Iterator end) {
    using ValueType = typename std::iterator_traits<Iterator>::value_type;

    std::cout << "Elements: ";
    while (begin != end) {
        std::cout << static_cast<ValueType>(*begin) << " ";
        ++begin;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec = {1, 2, 3};
    std::list<double> lst = {1.1, 2.2, 3.3};

    std::cout << "Vector Elements: ";
    printElements(vec.begin(), vec.end());

    std::cout << "List Elements: ";
    printElements(lst.begin(), lst.end());

    return 0;
}
