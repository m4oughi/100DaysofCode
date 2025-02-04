#include <iostream>
#include <list>

int main() {
    std::list<int> lst1 = {10, 20, 30};
    std::list<int> lst2 = {15, 25, 35};

    // Merge lst2 into lst1
    lst1.merge(lst2);

    // Sort the merged list
    lst1.sort();

    for (int i : lst1) std::cout << i << " ";

    return 0;
}
