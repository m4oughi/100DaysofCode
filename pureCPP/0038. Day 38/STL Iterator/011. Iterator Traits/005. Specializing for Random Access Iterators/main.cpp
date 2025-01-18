#include <iostream>
#include <vector>
#include <list>
#include <iterator>

template <typename Iterator>
void accessElements(Iterator it, typename std::iterator_traits<Iterator>::difference_type n) {
    using Category = typename std::iterator_traits<Iterator>::iterator_category;

    if (std::is_same<Category, std::random_access_iterator_tag>::value) {
        std::cout << "Random access: " << *(it + n) << std::endl;
    } else {
        std::cout << "Sequential access: ";
        for (auto i = 0; i < n; ++i) {
            ++it;
        }
        std::cout << *it << std::endl;
    }
}

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    std::list<int> lst = {10, 20, 30, 40, 50};

    std::cout << "Vector Example: ";
    accessElements(vec.begin(), 3);

    std::cout << "List Example: ";
    accessElements(lst.begin(), 3);

    return 0;
}
