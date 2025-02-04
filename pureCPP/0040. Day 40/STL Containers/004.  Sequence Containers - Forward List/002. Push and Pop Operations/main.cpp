#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist;

    // Add elements to the front
    flist.push_front(10);
    flist.push_front(20);
    flist.push_front(30);

    for (int i : flist) std::cout << i << " ";
    std::cout << "\n";

    // Remove the front element
    flist.pop_front();

    for (int i : flist) std::cout << i << " ";

    return 0;
}
