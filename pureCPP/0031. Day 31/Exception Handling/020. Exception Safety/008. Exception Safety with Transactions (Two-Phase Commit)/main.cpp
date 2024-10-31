#include <iostream>
#include <vector>
#include <stdexcept>

class Transaction {
public:
    Transaction() : committed(false) {}

    void addChange(int change) {
        if (change < 0) {
            throw std::runtime_error("Negative change not allowed!");
        }
        changes.push_back(change);
    }

    void commit() {
        committed = true;
    }

    ~Transaction() {
        if (!committed) {
            std::cout << "Transaction rolled back!" << std::endl;
        } else {
            std::cout << "Transaction committed!" << std::endl;
        }
    }

private:
    std::vector<int> changes;
    bool committed;
};

int main() {
    try {
        Transaction txn;
        txn.addChange(10);
        txn.addChange(-5);  // Fails and triggers rollback
        txn.commit();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
