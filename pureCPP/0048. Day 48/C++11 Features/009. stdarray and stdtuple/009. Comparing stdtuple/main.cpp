#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, std::string> t1(1, "Apple");
    std::tuple<int, std::string> t2(2, "Banana");

    if (t1 < t2) {
        std::cout << "t1 is smaller than t2\n";
    }

    return 0;
}
