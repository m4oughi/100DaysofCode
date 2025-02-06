#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> list1 = {"apple", "grape", "mango"};
    std::list<std::string> list2 = {"banana", "kiwi", "orange"};

    list1.merge(list2); // Merging lists of strings (lexicographically)

    std::cout << "Merged list: ";
    for (const auto& str : list1) std::cout << str << " ";

    return 0;
}
