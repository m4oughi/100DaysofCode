#include <iostream>
#include <queue>

struct Order {
    int orderId;
    std::string customer;
};

int main() {
    std::queue<Order> orderQueue;

    orderQueue.push({1001, "Alice"});
    orderQueue.push({1002, "Bob"});
    orderQueue.push({1003, "Charlie"});

    while (!orderQueue.empty()) {
        Order order = orderQueue.front();
        std::cout << "Processing Order " << order.orderId << " for " << order.customer << std::endl;
        orderQueue.pop();
    }

    return 0;
}
