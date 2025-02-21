#include <iostream>
#include <queue>

struct Ticket {
    int ticketNumber;
    std::string customer;

    Ticket(int num, std::string name) : ticketNumber(num), customer(name) {}
};

int main() {
    std::queue<Ticket> ticketQueue;

    ticketQueue.emplace(101, "John Doe");
    ticketQueue.emplace(102, "Jane Smith");
    ticketQueue.emplace(103, "Charlie Brown");

    while (!ticketQueue.empty()) {
        Ticket current = ticketQueue.front();
        std::cout << "Now Serving: Ticket " << current.ticketNumber << " - " << current.customer << std::endl;
        ticketQueue.pop();
    }

    return 0;
}
