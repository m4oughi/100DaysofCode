#include <iostream>
#include <memory>

struct Data {
    int value;
    double moreData;
};

int main() {
    // Create a shared_ptr to manage the whole Data object
    std::shared_ptr<Data> dataPtr = std::make_shared<Data>();
    dataPtr->value = 10;
    dataPtr->moreData = 20.5;

    // Create a shared_ptr alias that points to the 'value' member of the Data object
    std::shared_ptr<int> aliasPtr(dataPtr, &dataPtr->value);

    std::cout << "Original value: " << dataPtr->value << std::endl;
    std::cout << "Aliased value: " << *aliasPtr << std::endl;

    // Both aliasPtr and dataPtr share ownership of the same Data object
    return 0;
}
