#include <iostream>

struct Box {
    int length;
    mutable int timesAccessed;  // mutable allows modification in const functions

    Box(int l) : length(l), timesAccessed(0) {}

    void showLength() const {
        ++timesAccessed;  // allowed due to mutable keyword
        std::cout << "Length: " << length << " (Accessed: " << timesAccessed << " times)" << std::endl;
    }
};

int main() {
    Box box(10);
    box.showLength();
    box.showLength();
    return 0;
}
