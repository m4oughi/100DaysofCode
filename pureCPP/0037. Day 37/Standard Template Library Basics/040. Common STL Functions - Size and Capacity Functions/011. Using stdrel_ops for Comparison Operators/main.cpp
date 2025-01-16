#include <iostream>
#include <utility>

class MyClass {
public:
    int val;

    MyClass(int v) : val(v) {}

    bool operator==(const MyClass& other) const {
        return val == other.val;
    }

    bool operator<(const MyClass& other) const {
        return val < other.val;
    }
};

int main() {
    MyClass a(10), b(20);

    using namespace std::rel_ops;

    std::cout << "a != b: " << (a != b) << "\n";
    std::cout << "a > b: " << (a > b) << "\n";

    return 0;
}
