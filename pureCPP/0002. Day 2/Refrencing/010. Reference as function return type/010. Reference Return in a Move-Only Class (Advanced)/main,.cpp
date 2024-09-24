#include <iostream>
#include <utility>

class MoveOnly {
private:
    int *data;
public:
    MoveOnly(int value) : data(new int(value)) {}
    ~MoveOnly() { delete data; }

    MoveOnly(MoveOnly &&other) noexcept : data(other.data) {
        other.data = nullptr;
    }

    MoveOnly& operator=(MoveOnly &&other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    int& getData() {
        return *data;  // Return reference to data
    }
};

int main() {
    MoveOnly obj(300);
    int &ref = obj.getData();  // ref refers to obj.data
    ref = 400;  // Modify data
    std::cout << obj.getData() << std::endl;  // Output: 400

    return 0;
}