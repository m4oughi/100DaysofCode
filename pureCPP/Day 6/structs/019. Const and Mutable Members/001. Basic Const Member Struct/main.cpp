#include <iostream>

struct Box {
    const int length;

    Box(int l) : length(l) {}
    
    void showLength() const {
        std::cout << "Length: " << length << std::endl;
    }
};

int main() {
    Box box(10);
    box.showLength();
    // box.length = 20; // Error: cannot modify const member
    return 0;
}
