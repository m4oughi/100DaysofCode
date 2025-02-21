#include <iostream>
#include <queue>

struct Customer {
    int id;
    std::string name;
};

int main() {
    std::queue<Customer> callQueue;

    callQueue.push({101, "John"});
    callQueue.push({102, "Mary"});
    callQueue.push({103, "Tom"});

    while (!callQueue.empty()) {
        Customer c = callQueue.front();
        std::cout << "Attending Customer " << c.id << ": " << c.name << std::endl;
        callQueue.pop();
    }

    return 0;
}
