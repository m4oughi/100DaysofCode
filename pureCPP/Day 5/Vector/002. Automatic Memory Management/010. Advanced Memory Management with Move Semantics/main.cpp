#include <iostream>
#include <vector>

class LargeObject {
public:
    LargeObject() { data = new int[1000]; std::cout << "LargeObject created\n"; }
    LargeObject(const LargeObject&) = delete;  // Prevent copying
    LargeObject(LargeObject&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "LargeObject moved\n";
    }
    ~LargeObject() { delete[] data; std::cout << "LargeObject destroyed\n"; }

private:
    int* data;
};

int main() {
    std::vector<LargeObject> objects;

    // Emplace a new LargeObject in the vector
    objects.emplace_back();

    // Move a LargeObject into the vector
    LargeObject obj;
    objects.push_back(std::move(obj));  // Efficient move, no deep copy

    return 0;
}
