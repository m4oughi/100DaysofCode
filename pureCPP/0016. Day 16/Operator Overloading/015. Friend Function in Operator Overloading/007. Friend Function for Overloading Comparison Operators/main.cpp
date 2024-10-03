#include <iostream>
using namespace std;

class Box {
    int volume;
public:
    Box(int v = 0) : volume(v) {}

    // Friend functions for comparison operators
    friend bool operator<(const Box& b1, const Box& b2);
    friend bool operator>(const Box& b1, const Box& b2);
    friend bool operator<=(const Box& b1, const Box& b2);
    friend bool operator>=(const Box& b1, const Box& b2);
};

// Overloading < using a friend function
bool operator<(const Box& b1, const Box& b2) {
    return b1.volume < b2.volume;
}

// Overloading > using a friend function
bool operator>(const Box& b1, const Box& b2) {
    return b1.volume > b2.volume;
}

// Overloading <= using a friend function
bool operator<=(const Box& b1, const Box& b2) {
    return b1.volume <= b2.volume;
}

// Overloading >= using a friend function
bool operator>=(const Box& b1, const Box& b2) {
    return b1.volume >= b2.volume;
}

int main() {
    Box b1(50), b2(30);
    if (b1 > b2)
        cout << "Box b1 is larger than Box b2" << endl;  // Output: Box b1 is larger than Box b2

    if (b2 <= b1)
        cout << "Box b2 is smaller or equal to Box b1" << endl;  // Output: Box b2 is smaller or equal to Box b1

    return 0;
}
