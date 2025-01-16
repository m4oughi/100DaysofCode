#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> ticketQueue;

    ticketQueue.push("Customer 1");
    ticketQueue.push("Customer 2");
    ticketQueue.push("Customer 3");

    while (!ticketQueue.empty()) {
        std::cout << ticketQueue.front() << " is being served.\n";
        ticketQueue.pop();
    }

    return 0;
}
