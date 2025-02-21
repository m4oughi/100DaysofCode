#include <iostream>
#include <queue>

struct Customer {
    int id;
    std::string name;
};

int main() {
    std::queue<Customer> customerQueue;

    customerQueue.push({1, "Alice"});
    customerQueue.push({2, "Bob"});
    customerQueue.push({3, "Charlie"});

    while (!customerQueue.empty()) {
        Customer current = customerQueue.front();
        std::cout << "Serving Customer ID: " << current.id << ", Name: " << current.name << std::endl;
        customerQueue.pop();
    }

    return 0;
}
