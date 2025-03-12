#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> myTuple(10, 3.14, "Ignored Value");

    int x;
    double y;
    
    std::tie(x, y, std::ignore) = myTuple;

    std::cout << "Extracted Values: " << x << ", " << y << std::endl;

    return 0;
}
