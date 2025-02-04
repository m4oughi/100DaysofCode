#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {10, 20, 30, 40, 50};

    // Remove element after the first position
    auto it = flist.begin();
    flist.erase_after(it);

    for (int i : flist) std::cout << i << " ";

    return 0;
}
