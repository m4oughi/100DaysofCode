#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us;
    
    us.insert(10);
    us.insert(20);
    us.insert(10); // Duplicate, ignored
    us.insert(30);

    std::cout << "Unordered Set elements: ";
    for (int num : us) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
