#include <iostream>
#include <memory>

struct Data {
    std::unique_ptr<int> value;

    Data(int v) : value(std::make_unique<int>(v)) {}

    Data(const Data&) = delete;  // Prevent copy
    Data& operator=(const Data&) = delete;

    Data(Data&& other) noexcept = default;
    Data& operator=(Data&& other) noexcept = default;
};

int main() {
    Data data1(10);
    Data data2 = std::move(data1);  // Move data1 to data2 using smart pointers

    if (!data1.value) {
        std::cout << "Data1 is empty after move." << std::endl;
    }

    std::cout << "Data2: " << *data2.value << std::endl;

    return 0;
}
