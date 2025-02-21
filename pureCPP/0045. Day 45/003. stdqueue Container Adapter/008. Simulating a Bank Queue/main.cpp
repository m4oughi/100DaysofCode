#include <iostream>
#include <queue>

struct Customer {
    int token;
    std::string name;
};

int main() {
    std::queue<Customer> bankQueue;

    bankQueue.push({1, "Alice"});
    bankQueue.push({2, "Bob"});
    bankQueue.push({3, "Charlie"});

    while (!bankQueue.empty()) {
        Customer current = bankQueue.front();
        std::cout << "Serving Customer " << current.token << ": " << current.name << std::endl;
        bankQueue.pop();
    }

    return 0;
}
