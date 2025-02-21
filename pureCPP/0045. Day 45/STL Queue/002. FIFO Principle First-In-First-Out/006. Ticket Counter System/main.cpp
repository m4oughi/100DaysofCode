#include <iostream>
#include <queue>

struct Person {
    int ticketNumber;
    std::string name;
};

int main() {
    std::queue<Person> ticketQueue;

    ticketQueue.push({1, "Alice"});
    ticketQueue.push({2, "Bob"});
    ticketQueue.push({3, "Charlie"});

    while (!ticketQueue.empty()) {
        Person current = ticketQueue.front();
        std::cout << "Serving ticket " << current.ticketNumber << " - " << current.name << std::endl;
        ticketQueue.pop();
    }

    return 0;
}
