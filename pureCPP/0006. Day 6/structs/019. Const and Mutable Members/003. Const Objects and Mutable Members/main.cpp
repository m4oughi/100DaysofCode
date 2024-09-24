#include <iostream>

struct Box {
    int length;
    mutable int timesAccessed;

    Box(int l) : length(l), timesAccessed(0) {}

    void showLength() const {
        ++timesAccessed;
        std::cout << "Length: " << length << " (Accessed: " << timesAccessed << " times)" << std::endl;
    }
};

int main() {
    const Box box(10);  // Constant object
    box.showLength();    // Still modifies timesAccessed due to mutable
    box.showLength();
    return 0;
}
