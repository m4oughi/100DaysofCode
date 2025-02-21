#include <iostream>
#include <queue>

struct Order {
    int orderID;
    std::string customer;
};

int main() {
    std::queue<Order> orderQueue;

    orderQueue.push({101, "Alice"});
    orderQueue.push({102, "Bob"});
    orderQueue.push({103, "Charlie"});

    std::cout << "Latest Order Received: " << orderQueue.back().customer << std::endl;  // "Charlie"

    return 0;
}
