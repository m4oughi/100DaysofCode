#include <iostream>
#include <set>

int main() {
    std::set<int> s;
    std::multiset<int> ms;

    s.insert(10);
    s.insert(10);  // Won't be inserted again

    ms.insert(10);
    ms.insert(10);  // Can be inserted multiple times

    std::cout << "Set size: " << s.size() << std::endl;
    std::cout << "Multiset size: " << ms.size() << std::endl;

    return 0;
}
