#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {50, 10, 40, 20, 30};

    // Sort in ascending order
    flist.sort();

    for (int i : flist) std::cout << i << " ";

    return 0;
}
