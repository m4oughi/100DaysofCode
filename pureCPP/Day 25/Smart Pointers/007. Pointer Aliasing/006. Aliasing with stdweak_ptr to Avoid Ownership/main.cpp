#include <iostream>
#include <memory>

struct Data {
    int value;
    double moreData;
};

int main() {
    std::shared_ptr<Data> dataPtr = std::make_shared<Data>();
    dataPtr->value = 10;
    dataPtr->moreData = 20.5;

    // Create a weak_ptr alias that does not extend the lifetime of the Data object
    std::weak_ptr<int> weakAliasPtr(dataPtr, &dataPtr->value);

    if (auto sharedAlias = weakAliasPtr.lock()) {
        std::cout << "Weak alias value: " << *sharedAlias << std::endl;
    } else {
        std::cout << "Data has already been deleted" << std::endl;
    }

    // Memory will be freed when dataPtr goes out of scope
    return 0;
}
