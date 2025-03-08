#include <iostream>
#include <deque>
#include <list>

int main() {
    std::list<int> lst = {100, 200, 300, 400, 500};

    // Construct deque from list
    std::deque<int> dq(lst.begin(), lst.end());

    std::cout << "Deque from list: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
