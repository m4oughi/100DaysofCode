#include <iostream>

struct UniqueID {
    static inline int id = 0;

    static int generate() {
        return ++id;
    }
};

int main() {
    std::cout << "New ID: " << UniqueID::generate() << '\n';
    std::cout << "New ID: " << UniqueID::generate() << '\n';
    return 0;
}
