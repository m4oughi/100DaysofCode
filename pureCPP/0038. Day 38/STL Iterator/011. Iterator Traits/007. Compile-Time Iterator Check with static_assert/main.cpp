#include <iostream>
#include <vector>
#include <iterator>
#include <type_traits>

template <typename Iterator>
void ensureRandomAccess(Iterator it) {
    using Category = typename std::iterator_traits<Iterator>::iterator_category;

    static_assert(std::is_same<Category, std::random_access_iterator_tag>::value, 
                  "Iterator must be random access");

    std::cout << "Random Access Iterator Detected. First Element: " << *it << std::endl;
}

int main() {
    std::vector<int> vec = {10, 20, 30};

    ensureRandomAccess(vec.begin());

    return 0;
}
