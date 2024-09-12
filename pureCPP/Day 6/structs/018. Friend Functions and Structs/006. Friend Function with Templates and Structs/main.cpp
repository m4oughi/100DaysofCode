#include <iostream>

template <typename T>
struct Box {
private:
    T length;
    
    // Declare friend function template
    friend T getLength(Box<T> b);
    
public:
    Box(T l) : length(l) {}
};

template <typename T>
T getLength(Box<T> b) {
    return b.length;
}

int main() {
    Box<int> box(10);
    Box<double> bigBox(10.5);
    
    std::cout << "Length: " << getLength(box) << std::endl;
    std::cout << "Big Box Length: " << getLength(bigBox) << std::endl;
    return 0;
}
