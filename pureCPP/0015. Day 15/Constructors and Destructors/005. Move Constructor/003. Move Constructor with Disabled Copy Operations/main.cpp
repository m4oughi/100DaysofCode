#include <iostream>

class Resource {
private:
    int* data;
    int size;
public:
    // Parameterized constructor
    Resource(int s) : size(s) {
        data = new int[size];
        std::cout << "Resource of size " << size << " created." << std::endl;
    }

    // Move constructor
    Resource(Resource&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
        std::cout << "Resource moved." << std::endl;
    }

    // Delete copy constructor and copy assignment operator
    Resource(const Resource&) = delete;
    Resource& operator=(const Resource&) = delete;

    // Destructor
    ~Resource() {
        delete[] data;
        std::cout << "Resource memory deallocated." << std::endl;
    }
};

int main() {
    Resource res1(20);
    Resource res2 = std::move(res1);  // Only move is allowed
    return 0;
}
