#include <iostream>
#include <queue>
#include <string>

struct Customer {
    std::string name;
    int orderNumber;
};

int main() {
    std::queue<Customer> customers;

    customers.push({"Alice", 1});
    customers.push({"Bob", 2});

    std::cout << "Front customer: " << customers.front().name << ", Order Number: " << customers.front().orderNumber << "\n";

    customers.pop();
    std::cout << "Front customer after pop: " << customers.front().name << "\n";

    return 0;
}
