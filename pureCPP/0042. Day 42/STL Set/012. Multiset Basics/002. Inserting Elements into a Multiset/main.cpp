#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms;
    
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(30);

    std::cout << "Multiset elements: ";
    for (int num : ms) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
