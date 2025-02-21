#include <iostream>
#include <queue>

struct Customer {
    int tokenNumber;
    std::string name;
};

int main() {
    std::queue<Customer> bankQueue;

    bankQueue.push({1, "Alice"});
    bankQueue.push({2, "Bob"});
    bankQueue.push({3, "Charlie"});

    std::cout << "Serving Customers:" << std::endl;
    while (!bankQueue.empty()) {
        Customer current = bankQueue.front();
        std::cout << "Token " << current.tokenNumber << ": " << current.name << std::endl;
        bankQueue.pop();
    }

    return 0;
}
