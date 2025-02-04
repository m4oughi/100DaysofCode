#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {10, 20, 40};

    // Insert after the first element
    auto it = flist.begin();
    flist.insert_after(it, 30);

    for (int i : flist) std::cout << i << " ";

    return 0;
}
