#include <iostream>
#include <compare>

class Box {
public:
    int volume;

    Box(int v) : volume(v) {}

    auto operator<=>(const Box& other) const {
        return volume <=> other.volume;  // Compare by volume
    }
};

int main() {
    Box b1(100), b2(200);

    if (b1 < b2) std::cout << "b1 is smaller than b2\n";
    else if (b1 > b2) std::cout << "b1 is larger than b2\n";
    else std::cout << "b1 and b2 are equal in volume\n";
}
