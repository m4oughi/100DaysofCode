#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {10, 20, 30, 40, 50};

    // Reverse the list
    flist.reverse();

    for (int i : flist) std::cout << i << " ";

    return 0;
}
