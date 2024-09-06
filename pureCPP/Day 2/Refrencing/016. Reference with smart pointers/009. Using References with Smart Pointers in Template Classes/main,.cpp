#include <iostream>
#include <memory>

template<typename T>
class Wrapper {
    std::shared_ptr<T> sptr;
public:
    Wrapper(std::shared_ptr<T> ptr) : sptr(ptr) {}

    void process(std::shared_ptr<T>& newPtr) {
        sptr = newPtr;  // Assign new shared_ptr using reference
    }

    void display() const {
        std::cout << "Wrapped value: " << *sptr << std::endl;
    }
};

int main() {
    auto sptr1 = std::make_shared<int>(10);
    auto sptr2 = std::make_shared<int>(20);

    Wrapper<int> wrapper(sptr1);
    wrapper.display();  // Shows 10

    wrapper.process(sptr2);  // Pass shared_ptr by reference
    wrapper.display();  // Shows 20

    return 0;
}
