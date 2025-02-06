#include <iostream>
#include <list>

class LargeObject {
public:
    int data[1000];  // Large array
    LargeObject(int value) { 
        std::fill(std::begin(data), std::end(data), value);
    }
};

int main() {
    std::list<LargeObject> objList;

    objList.emplace_back(42);  // Construct in-place, avoiding copy

    std::cout << "Large object emplaced successfully!\n";
    return 0;
}
