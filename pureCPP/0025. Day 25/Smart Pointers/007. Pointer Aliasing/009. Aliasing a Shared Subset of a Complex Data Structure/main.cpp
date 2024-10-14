#include <iostream>
#include <memory>
#include <vector>

struct ComplexData {
    std::vector<int> numbers;
};

int main() {
    auto complexPtr = std::make_shared<ComplexData>();
    complexPtr->numbers = {1, 2, 3, 4, 5};

    // Alias to the second element in the numbers vector
    std::shared_ptr<int> aliasPtr(complexPtr, &complexPtr->numbers[1]);

    std::cout << "Second element via alias: " << *aliasPtr << std::endl;
    std::cout << "Second element via original: " << complexPtr->numbers[1] << std::endl;

    return 0;
}
