#include <iostream>
#include <memory>

class MyClass {
public:
    std::weak_ptr<int> weakData;  // Weak pointer to data

    MyClass(const std::shared_ptr<int>& data) : weakData(data) {}

    void showValue() {
        if (auto sharedData = weakData.lock()) {
            std::cout << "Weak pointer is valid. Value: " << *sharedData << std::endl;
        } else {
            std::cout << "Weak pointer is expired." << std::endl;
        }
    }
};

int main() {
    std::shared_ptr<int> sharedData = std::make_shared<int>(100);
    MyClass obj(sharedData);

    obj.showValue();  // Weak pointer should be valid

    sharedData.reset();  // Reset shared pointer, now weak pointer should be expired

    obj.showValue();  // Check weak pointer status

    return 0;
}
