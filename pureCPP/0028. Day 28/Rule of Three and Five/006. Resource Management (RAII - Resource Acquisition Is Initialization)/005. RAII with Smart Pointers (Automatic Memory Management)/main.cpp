#include <iostream>
#include <memory>

class SmartPointerRAII {
    std::unique_ptr<int> data;
public:
    SmartPointerRAII(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Memory allocated by smart pointer!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    {
        SmartPointerRAII obj(300);
        obj.display();
    }  // Memory is automatically deallocated by std::unique_ptr when the object goes out of scope
    return 0;
}
