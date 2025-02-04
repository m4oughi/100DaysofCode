#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    // Finding the first element greater than 2
    auto it = myMap.upper_bound(2);

    if (it != myMap.end()) {
        std::cout << "Upper bound of key 2: " << it->first << " => " << it->second << std::endl; // 3 => Cherry
    } else {
        std::cout << "No element greater than 2." << std::endl;
    }

    return 0;
}
