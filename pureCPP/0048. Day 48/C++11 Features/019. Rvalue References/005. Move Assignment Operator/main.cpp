#include <iostream>

class MoveExample {
private:
    int* data;
public:
    MoveExample(int val) : data(new int(val)) {}

    MoveExample& operator=(MoveExample&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    void print() { std::cout << "Value: " << (data ? *data : 0) << std::endl; }

    ~MoveExample() { delete data; }
};

int main() {
    MoveExample obj1(10);
    MoveExample obj2(20);

    obj2 = std::move(obj1);
    obj2.print(); 

    return 0;
}
