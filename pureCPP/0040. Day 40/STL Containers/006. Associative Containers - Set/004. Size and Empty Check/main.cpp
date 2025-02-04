#include <iostream>
#include <set>

int main() {
    std::set<int> s = {1, 2, 3};

    std::cout << "Size: " << s.size() << "\n";
    std::cout << "Is empty: " << std::boolalpha << s.empty() << "\n";

    return 0;
}
