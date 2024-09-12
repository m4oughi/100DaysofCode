#include <iostream>
#include <vector>

struct Polygon {
    std::vector<int> sides;

    // Member initializer list with initialization list
    Polygon(std::initializer_list<int> s) : sides(s) {}
};

int main() {


    return 0;
}