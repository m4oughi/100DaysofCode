#include <iostream>

struct Box {
    int length;
    mutable int timesAccessed;

    Box(int l) : length(l), timesAccessed(0) {}

    void showLength() const {
        ++timesAccessed;
        std::cout << "Length: " << length << " (Accessed: " << timesAccessed << " times)" << std::endl;
    }

    // Non-const function modifying length
    void setLength(int l) {
        length = l;
    }
};

int main() {
    Box box(15);
    box.showLength();
    box.setLength(30);  // Modifying non-const member
    box.showLength();
    return 0;
}
