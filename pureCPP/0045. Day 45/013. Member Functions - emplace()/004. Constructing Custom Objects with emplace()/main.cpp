#include <iostream>
#include <queue>

struct Order {
    int orderID;
    std::string customer;

    Order(int id, std::string name) : orderID(id), customer(name) {
        std::cout << "Order Created: " << orderID << " for " << customer << std::endl;
    }
};

int main() {
    std::queue<Order> orderQueue;

    orderQueue.emplace(101, "Alice");
    orderQueue.emplace(102, "Bob");
    orderQueue.emplace(103, "Charlie");

    return 0;
}
