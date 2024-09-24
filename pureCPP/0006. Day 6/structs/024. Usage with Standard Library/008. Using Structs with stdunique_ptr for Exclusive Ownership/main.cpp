#include <iostream>
#include <memory>

struct Data {
    int value;
};

int main() {
    std::unique_ptr<Data> pData = std::make_unique<Data>(Data{10});

    std::cout << "Unique Data Value: " << pData->value << "\n";

    // Transferring ownership
    std::unique_ptr<Data> pDataTransfer = std::move(pData);

    if (!pData) {
        std::cout << "pData is now empty after transfer.\n";
    }

    std::cout << "Transferred Data Value: " << pDataTransfer->value << "\n";

    return 0;
}
