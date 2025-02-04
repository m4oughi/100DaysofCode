#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> fl = {10, 20, 30, 40};

    std::cout << "First element: " << fl.front() << "\n"; // 10

    return 0;
}
