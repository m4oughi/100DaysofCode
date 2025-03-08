#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> dq = {"First", "Middle", "Last"};

    // Erase first element
    dq.erase(dq.begin());

    // Erase last element
    dq.erase(dq.end() - 1);

    std::cout << "Deque after erasing first and last: ";
    for (const auto& str : dq) std::cout << str << " ";

    return 0;
}
