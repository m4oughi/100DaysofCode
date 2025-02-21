#include <iostream>
#include <queue>

struct SupportTicket {
    int ticketID;
    std::string customer;

    SupportTicket(int id, std::string name) : ticketID(id), customer(name) {
        std::cout << "New Support Ticket: " << ticketID << " from " << customer << std::endl;
    }
};

int main() {
    std::queue<SupportTicket> ticketQueue;

    ticketQueue.emplace(5001, "John Doe");
    ticketQueue.emplace(5002, "Jane Smith");
    ticketQueue.emplace(5003, "Charlie Brown");

    return 0;
}
