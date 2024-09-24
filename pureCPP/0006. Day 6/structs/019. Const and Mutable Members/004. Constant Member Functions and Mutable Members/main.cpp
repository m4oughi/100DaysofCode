#include <iostream>

struct Box {
    int length;
    mutable int timesAccessed;

    Box(int l) : length(l), timesAccessed(0) {}

    void showLength() const {
        ++timesAccessed;
        std::cout << "Length: " << length << " (Accessed: " << timesAccessed << " times)" << std::endl;
    }
    
    // Constant member function
    int getLength() const {
        return length;
    }
};

int main() {
    Box box(20);
    box.showLength();
    std::cout << "Length: " << box.getLength() << std::endl;
    return 0;
}
