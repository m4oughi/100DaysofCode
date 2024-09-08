#include <deque>
#include <list>
#include <iostream>

int main() {
    std::deque<int> deq = {100, 200, 300, 400, 500};
    std::list<int> lst = {10, 20, 30, 40, 50};

    // const_iterator for deque
    std::deque<int>::const_iterator itDeq;
    for (itDeq = deq.cbegin(); itDeq != deq.cend(); ++itDeq) {
        std::cout << *itDeq << " "; // Prints 100 200 300 400 500
    }
    std::cout << std::endl;

    // const_iterator for list
    std::list<int>::const_iterator itList;
    for (itList = lst.cbegin(); itList != lst.cend(); ++itList) {
        std::cout << *itList << " "; // Prints 10 20 30 40 50
    }
}
