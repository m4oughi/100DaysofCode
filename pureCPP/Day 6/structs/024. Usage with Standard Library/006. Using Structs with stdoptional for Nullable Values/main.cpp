#include <iostream>
#include <optional>

struct Data {
    int value;
};

int main() {
    std::optional<Data> optData;

    if (!optData.has_value()) {
        std::cout << "No data\n";
    }

    optData = Data{10};

    if (optData.has_value()) {
        std::cout << "Data value: " << optData->value << "\n";
    }

    return 0;
}
