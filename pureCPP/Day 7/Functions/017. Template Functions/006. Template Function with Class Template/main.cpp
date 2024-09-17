#include <iostream>

template <typename T>
class Box {
private:
    T value;

public:
    Box(T val) : value(val) {}

    T getValue() {
        return value;
    }
};

template <typename T>
T compare(Box<T> a, Box<T> b) {
    return (a.getValue() > b.getValue()) ? a.getValue() : b.getValue();
}

int main() {
    Box<int> box1(100);
    Box<int> box2(200);

    std::cout << "Greater value: " << compare(box1, box2) << std::endl;

    return 0;
}
