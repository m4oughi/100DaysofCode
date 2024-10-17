#include <iostream>
#include <vector>

class LargeData {
private:
    std::vector<int> data;

public:
    LargeData() : data(1000000, 42) { std::cout << "Large data constructed" << std::endl; }

    // Move constructor
    LargeData(LargeData&& other) noexcept : data(std::move(other.data)) {
        std::cout << "Moving large data" << std::endl;
    }

    // Move assignment operator
    LargeData& operator=(LargeData&& other) noexcept {
        if (this != &other) {
            data = std::move(other.data);
            std::cout << "Move-assigning large data" << std::endl;
        }
        return *this;
    }
};

int main() {
    LargeData ld1;
    LargeData ld2 = std::move(ld1);  // Moves large data instead of copying
}
