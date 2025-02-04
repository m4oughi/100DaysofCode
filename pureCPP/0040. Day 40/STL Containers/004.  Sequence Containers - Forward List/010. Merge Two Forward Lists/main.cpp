#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist1 = {10, 20, 30};
    std::forward_list<int> flist2 = {15, 25, 35};

    // Merge flist2 into flist1
    flist1.merge(flist2);

    for (int i : flist1) std::cout << i << " ";

    return 0;
}
