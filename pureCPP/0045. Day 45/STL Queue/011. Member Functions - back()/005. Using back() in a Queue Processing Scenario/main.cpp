#include <iostream>
#include <queue>

int main() {
    std::queue<int> ticketQueue;

    ticketQueue.push(101);
    ticketQueue.push(102);
    ticketQueue.push(103);

    std::cout << "Latest issued ticket: " << ticketQueue.back() << std::endl;  // 103

    ticketQueue.push(104);
    std::cout << "New latest issued ticket: " << ticketQueue.back() << std::endl;  // 104

    return 0;
}
