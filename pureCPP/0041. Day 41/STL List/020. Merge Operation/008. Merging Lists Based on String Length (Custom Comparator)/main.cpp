#include <iostream>
#include <list>
#include <string>

bool compareLength(const std::string& a, const std::string& b) {
    return a.length() < b.length();
}

int main() {
    std::list<std::string> list1 = {"cat", "elephant", "dog"};
    std::list<std::string> list2 = {"mouse", "lion", "tiger"};

    list1.merge(list2, compareLength);

    std::cout << "Merged list sorted by string length: ";
    for (const auto& word : list1) std::cout << word << " ";

    return 0;
}
