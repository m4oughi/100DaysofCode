#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40, 50};

    if (s.find(30) != s.end()) std::cout << "Element 30 found\n";
    else std::cout << "Element 30 not found\n";

    return 0;
}
