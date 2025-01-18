#include <iostream>
#include <iterator>
#include <vector>

int main() {
    using traits = std::iterator_traits<std::vector<int>::iterator>;

    std::cout << "Iterator Traits of std::vector<int>::iterator:" << std::endl;
    std::cout << "Value type: " << typeid(traits::value_type).name() << std::endl;
    std::cout << "Pointer type: " << typeid(traits::pointer).name() << std::endl;
    std::cout << "Reference type: " << typeid(traits::reference).name() << std::endl;
    std::cout << "Iterator category: " << typeid(traits::iterator_category).name() << std::endl;

    return 0;
}
