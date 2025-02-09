#include <iostream>
#include <set>

int main() {
    std::set<int> numbers; // Declaring an empty set
    std::set<int> initializedSet = {1, 2, 3, 4, 5}; // Initializing with values

    std::cout << "Set size: " << initializedSet.size() << std::endl;
    return 0;
}
