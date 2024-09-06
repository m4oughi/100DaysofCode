#include <iostream>

class Box {
private:
    int size;

public:
    Box(int s) : size(s) {}

    int& getSize() {  // Returns a mutable reference to size
        return size;
    }
};

int main() {
    Box box(50);
    int &refSize = box.getSize();  // Mutable reference to box.size
    refSize = 60;  // Modifies box.size
    std::cout << box.getSize() << std::endl;  // Output: 60

    return 0;
}