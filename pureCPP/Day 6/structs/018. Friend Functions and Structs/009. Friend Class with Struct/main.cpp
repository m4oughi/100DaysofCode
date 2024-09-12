#include <iostream>

struct Box;

struct BoxManager {
    void setLength(Box& b, int len);
};

struct Box {
private:
    int length;
    
    friend class BoxManager;  // Declare BoxManager as a friend
    
public:
    Box(int l) : length(l) {}
    void showLength() const {
        std::cout << "Length: " << length << std::endl;
    }
};

void BoxManager::setLength(Box& b, int len) {
    b.length = len;  // BoxManager can modify private members
}

int main() {
    Box box(10);
    box.showLength();
    
    BoxManager manager;
    manager.setLength(box, 20);
    box.showLength();
    
    return 0;
}
