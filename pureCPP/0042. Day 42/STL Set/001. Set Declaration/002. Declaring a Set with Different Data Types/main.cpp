#include <iostream>
#include <set>

int main() {
    std::set<char> charSet = {'a', 'b', 'c', 'd'};
    std::set<std::string> strSet = {"apple", "banana", "cherry"};

    std::cout << "Size of charSet: " << charSet.size() << std::endl;
    std::cout << "Size of strSet: " << strSet.size() << std::endl;
    return 0;
}
