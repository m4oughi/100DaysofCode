#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> list1 = {"apple", "banana", "cherry"};
    std::vector<std::string> list2 = {"apricot", "blueberry", "date"};
    std::vector<std::string> result(list1.size() + list2.size());

    std::merge(list1.begin(), list1.end(), list2.begin(), list2.end(), result.begin());

    std::cout << "Merged list of strings: ";
    for (const std::string& str : result) {
        std::cout << str << " ";
    }

    return 0;
}
