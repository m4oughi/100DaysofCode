#include <iostream>
#include <memory>

template <typename T>
struct CustomAllocator {
    using value_type = T;

    T* allocate(std::size_t n) {
        std::cout << "Allocating " << n << " elements." << std::endl;
        return static_cast<T*>(::operator new(n * sizeof(T)));
    }

    void deallocate(T* p, std::size_t n) {
        std::cout << "Deallocating " << n << " elements." << std::endl;
        ::operator delete(p);
    }
};

struct Data {
    std::unique_ptr<int, std::function<void(int*)>> value;

    Data(int v)
        : value(new int(v), [](int* p) {
              std::cout << "Custom deleter called." << std::endl;
              delete p;
          }) {}

    Data(const Data&) = delete;
    Data& operator=(const Data&) = delete;
};

int main() {
    Data data1(10);

    std::cout << "Value: " << *data1.value << std::endl;

    return 0;
}
