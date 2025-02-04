#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {10, 10, 20, 30, 30, 40, 40};

    // Remove consecutive duplicates
    flist.unique();

    for (int i : flist) std::cout << i << " ";

    return 0;
}
