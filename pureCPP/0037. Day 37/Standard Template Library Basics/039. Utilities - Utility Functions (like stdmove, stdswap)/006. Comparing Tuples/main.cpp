#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, std::string> t1(1, "Alice");
    std::tuple<int, std::string> t2(2, "Bob");

    if (t1 < t2) {
        std::cout << "t1 is less than t2\n";
    } else {
        std::cout << "t1 is not less than t2\n";
    }

    return 0;
}
