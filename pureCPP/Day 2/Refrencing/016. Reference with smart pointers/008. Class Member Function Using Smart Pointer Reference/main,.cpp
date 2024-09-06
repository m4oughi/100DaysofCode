#include <iostream>
#include <memory>

class MyClass {
    std::shared_ptr<int> data;
public:
    MyClass(int value) : data(std::make_shared<int>(value)) {}

    void setData(std::shared_ptr<int>& newData) {
        data = newData;  // Modify shared_ptr member using reference
    }

    void show() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    auto sptr1 = std::make_shared<int>(100);
    auto sptr2 = std::make_shared<int>(200);

    MyClass obj(*sptr1);
    obj.show();  // Shows 100

    obj.setData(sptr2);  // Set new shared_ptr
    obj.show();  // Shows 200

    return 0;
}
