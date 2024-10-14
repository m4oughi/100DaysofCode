#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr(new int(100), [](int* p) {
        std::cout << "Lambda deleter called. Deleting memory..." << std::endl;
        delete p;
    });

    std::cout << "Value: " << *ptr << std::endl;

    // Memory will be deleted by the lambda function custom deleter
    return 0;
}
