#include <iostream>
#include <memory>

struct Data {
    int value;
};

int main() {
    std::shared_ptr<Data> pData = std::make_shared<Data>(Data{10});

    std::cout << "Shared Data Value: " << pData->value << "\n";

    std::shared_ptr<Data> pDataCopy = pData;  // Share ownership

    std::cout << "Shared Data Copy Value: " << pDataCopy->value << "\n";

    return 0;
}
