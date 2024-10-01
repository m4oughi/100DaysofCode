#include <iostream>

class Resource {
private:
    int* data;
    int size;
public:
    // Constructor
    Resource(int s) : size(s) {
        data = new int[size];
        std::cout << "Resource of size " << size << " allocated." << std::endl;
    }

    // Move constructor
    Resource(Resource&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;  // Transfer ownership
        std::cout << "Resource moved." << std::endl;
    }

    // Destructor
    ~Resource() {
        delete[] data;
        std::cout << "Resource deallocated." << std::endl;
    }
};

int main() {
    Resource res1(10);
    Resource res2 = std::move(res1);  // Calls move constructor
    return 0;
}
