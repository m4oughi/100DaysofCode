#include <iostream>
#include <list>
#include <map>

int main() {
    std::list<int> lst;
    std::map<int, int> mp;

    std::cout << "Max size of list: " << lst.max_size() << "\n";
    std::cout << "Max size of map: " << mp.max_size() << "\n";

    return 0;
}
