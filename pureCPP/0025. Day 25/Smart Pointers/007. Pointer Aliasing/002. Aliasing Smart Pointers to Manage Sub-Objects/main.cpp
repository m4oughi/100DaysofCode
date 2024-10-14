#include <iostream>
#include <memory>

struct ComplexObject {
    int part1;
    float part2;
};

int main() {
    auto complexPtr = std::make_shared<ComplexObject>();
    complexPtr->part1 = 100;
    complexPtr->part2 = 200.5f;

    // Create an alias shared_ptr to manage part1 of ComplexObject
    std::shared_ptr<int> aliasPtr(complexPtr, &complexPtr->part1);

    std::cout << "Original object, part1: " << complexPtr->part1 << std::endl;
    std::cout << "Aliased pointer, part1: " << *aliasPtr << std::endl;

    // Both aliasPtr and complexPtr share ownership of the entire ComplexObject
    return 0;
}
