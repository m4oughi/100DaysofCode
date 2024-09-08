#include <map>
#include <iostream>

int main() {
    std::map<int, std::string> myMap = {{1, "one"}, {2, "two"}, {3, "three"}};

    std::map<int, std::string>::const_iterator it;

    for (it = myMap.cbegin(); it != myMap.cend(); ++it) {
        std::cout << it->first << " -> " << it->second << std::endl;
    }
}
