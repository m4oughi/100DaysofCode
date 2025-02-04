#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {1, 2, 3, 4, 5};

    for (int i : flist) {
        std::cout << i << " ";
    }

    return 0;
}
