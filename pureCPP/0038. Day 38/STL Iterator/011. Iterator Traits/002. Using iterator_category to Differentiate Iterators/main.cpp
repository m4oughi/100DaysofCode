#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <type_traits>

template <typename Iterator>
void checkIteratorCategory(Iterator it) {
    using Category = typename std::iterator_traits<Iterator>::iterator_category;

    if (std::is_same<Category, std::random_access_iterator_tag>::value) {
        std::cout << "Random Access Iterator" << std::endl;
    } else if (std::is_same<Category, std::bidirectional_iterator_tag>::value) {
        std::cout << "Bidirectional Iterator" << std::endl;
    } else if (std::is_same<Category, std::forward_iterator_tag>::value) {
        std::cout << "Forward Iterator" << std::endl;
    } else {
        std::cout << "Other Iterator Type" << std::endl;
    }
}

int main() {
    std::vector<int> vec = {1, 2, 3};
    std::list<int> lst = {4, 5, 6};

    std::cout << "Vector Iterator: ";
    checkIteratorCategory(vec.begin());

    std::cout << "List Iterator: ";
    checkIteratorCategory(lst.begin());

    return 0;
}
