#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {10, 20, 30, 40};

    // Access and modify using iterators
    for (auto it = flist.begin(); it != flist.end(); ++it) {
        *it += 5;
    }

    for (int i : flist) std::cout << i << " ";

    return 0;
}
