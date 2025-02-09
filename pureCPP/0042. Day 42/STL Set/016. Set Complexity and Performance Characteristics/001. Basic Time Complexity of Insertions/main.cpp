#include <iostream>
#include <set>

int main() {
    std::set<int> s;
    
    s.insert(10);
    s.insert(20);
    s.insert(30);

    std::cout << "Set elements: ";
    for (int num : s) std::cout << num << " ";

    return 0;
}
