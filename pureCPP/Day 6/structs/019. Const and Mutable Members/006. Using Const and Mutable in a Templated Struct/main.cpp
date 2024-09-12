#include <iostream>

template<typename T>
struct Box {
    const T length;   // Templated const member
    mutable int timesAccessed;

    Box(T l) : length(l), timesAccessed(0) {}

    void showLength() const {
        ++timesAccessed;
        std::cout << "Length: " << length << " (Accessed: " << timesAccessed << " times)" << std::endl;
    }
};

int main() {
    Box<int> intBox(10);
    intBox.showLength();
    
    Box<double> doubleBox(15.5);
    doubleBox.showLength();
    
    return 0;
}
