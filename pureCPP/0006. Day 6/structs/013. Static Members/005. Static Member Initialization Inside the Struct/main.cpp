#include <iostream>

struct StaticInit {
    static int count;
    StaticInit() {
        ++count;
    }
};

int StaticInit::count = 0;

int main() {
    StaticInit obj1, obj2;
    std::cout << "Count: " << StaticInit::count << std::endl;
}
