#include <iostream>

struct Data {
    int* value;

    Data(int v) {
        value = new int(v);
    }

    Data(const Data& other) = delete;  // Prevent copy

    Data(Data&& other) noexcept {
        value = other.value;  // Transfer ownership
        other.value = nullptr;  // Invalidate the source
    }

    Data& operator=(Data&& other) noexcept {
        if (this != &other) {
            delete value;
            value = other.value;  // Transfer ownership
            other.value = nullptr;
        }
        return *this;
    }

    ~Data() {
        delete value;
    }
};

int main() {
    Data data1(10);
    Data data2 = std::move(data1);  // Move data1 to data2

    if (data1.value == nullptr) {
        std::cout << "Data1 is empty after move." << std::endl;
    }

    std::cout << "Data2: " << *data2.value << std::endl;

    return 0;
}
