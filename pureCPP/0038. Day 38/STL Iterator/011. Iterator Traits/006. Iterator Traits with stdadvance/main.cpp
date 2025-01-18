#include <iostream>
#include <vector>
#include <list>
#include <iterator>

template <typename Iterator>
void advanceIterator(Iterator it, typename std::iterator_traits<Iterator>::difference_type n) {
    std::advance(it, n);
    std::cout << "Advanced to: " << *it << std::endl;
}

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    std::list<int> lst = {10, 20, 30, 40, 50};

    std::cout << "Vector Example: ";
    advanceIterator(vec.begin(), 3);

    std::cout << "List Example: ";
    advanceIterator(lst.begin(), 3);

    return 0;
}
