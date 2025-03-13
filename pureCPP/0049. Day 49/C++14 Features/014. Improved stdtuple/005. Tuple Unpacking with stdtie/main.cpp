#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> myTuple = {42, 3.14, "Hello"};

    int i;
    double d;
    std::string s;

    std::tie(i, d, s) = myTuple; // Unpacking tuple into separate variables

    std::cout << "Unpacked values: " << i << ", " << d << ", " << s << "\n";

    return 0;
}
