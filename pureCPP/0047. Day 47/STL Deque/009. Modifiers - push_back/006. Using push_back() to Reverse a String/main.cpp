#include <iostream>
#include <deque>

int main() {
    std::string str = "HELLO";
    std::deque<char> dq;

    // Inserting characters at the back
    for (char ch : str)
        dq.push_back(ch);

    std::cout << "Reversed string: ";
    while (!dq.empty()) {
        std::cout << dq.back(); // Access the last element
        dq.pop_back(); // Remove the last element
    }

    return 0;
}
