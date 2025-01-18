#include <iostream>
#include <vector>

int main() {
    std::vector<int*> ptrs;
    int a = 10, b = 20, c = 30;
    ptrs.push_back(&a);
    ptrs.push_back(&b);
    ptrs.push_back(&c);

    std::cout << "Dereferencing pointers stored in vector: ";
    for (auto it = ptrs.begin(); it != ptrs.end(); ++it) {
        std::cout << **it << " "; // Dereference iterator, then dereference pointer
    }

    return 0;
}
