#include <iostream>
#include <memory>

class MyClass {
public:
    void update() {
        std::cout << "Updating MyClass object" << std::endl;
    }
};

void modify(std::shared_ptr<MyClass>& sptr) {
    sptr->update();  // Use the smart pointer
    sptr.reset();    // Reset the smart pointer
}

int main() {
    auto sptr = std::make_shared<MyClass>();
    modify(sptr);  // Modify the smart pointer inside the function

    if (!sptr) {
        std::cout << "Smart pointer reset" << std::endl;
    }

    return 0;
}
