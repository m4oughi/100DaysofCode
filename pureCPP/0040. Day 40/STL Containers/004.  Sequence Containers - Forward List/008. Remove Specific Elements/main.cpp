#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {10, 20, 30, 20, 40, 20};

    // Remove all occurrences of 20
    flist.remove(20);

    for (int i : flist) std::cout << i << " ";

    return 0;
}
