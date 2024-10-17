#include <iostream>
#include <utility>

class Resource {
    int* data;
    size_t size;
public:
    Resource(size_t sz) : size(sz), data(new int[sz]) {
        std::fill(data, data + size, 1);  // Fill with dummy data
    }
    
    Resource(Resource&& other) noexcept : size(other.size), data(other.data) {
        other.data = nullptr;
    }
    
    Resource& operator=(Resource&& other) noexcept {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    ~Resource() { delete[] data; }

    void swap(Resource& other) noexcept {
        std::swap(data, other.data);  // Efficiently swap internal resources
        std::swap(size, other.size);
    }

    size_t getSize() const { return size; }
};

int main() {
    Resource res1(1000), res2(2000);

    std::cout << "Before swap: res1 size = " << res1.getSize() << ", res2 size = " << res2.getSize() << std::endl;

    std::swap(res1, res2);  // Using custom swap method for large resources

    std::cout << "After swap: res1 size = " << res1.getSize() << ", res2 size = " << res2.getSize() << std::endl;
}
