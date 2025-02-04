#include <iostream>
#include <vector>
#include <list>
#include <set>

int main() {
    std::vector<int> vec = {1, 2, 3};
    std::list<int> myList;
    std::set<int> mySet = {5, 10, 15};

    // Check if containers are empty
    std::cout << "Vector is " << (vec.empty() ? "empty." : "not empty.") << std::endl;
    std::cout << "List is " << (myList.empty() ? "empty." : "not empty.") << std::endl;
    std::cout << "Set is " << (mySet.empty() ? "empty." : "not empty.") << std::endl;

    return 0;
}
