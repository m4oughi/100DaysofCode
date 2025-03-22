#include <iostream>
#include <memory>

struct Data {
    int value;
};

int main() {
    auto dataPtr = std::make_shared<Data>(); // Control block manages `Data`
    std::shared_ptr<int> aliasPtr(dataPtr, &dataPtr->value); // Aliased pointer

    dataPtr->value = 100;
    std::cout << "Aliased Value: " << *aliasPtr << "\n";
    std::cout << "Use count: " << aliasPtr.use_count() << "\n";

    return 0;
}
