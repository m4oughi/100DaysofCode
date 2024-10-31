#include <iostream>
#include <vector>
#include <stdexcept>

class Transaction {
public:
    Transaction() {
        std::cout << "Starting transaction." << std::endl;
    }

    ~Transaction() {
        if (!committed) {
            std::cout << "Rolling back transaction." << std::endl;
        } else {
            std::cout << "Transaction committed." << std::endl;
        }
    }

    void addChange(int change) {
        if (change < 0) {
            throw std::runtime_error("Negative change not allowed!");
        }
        changes.push_back(change);
    }

    void commit() {
        committed = true;
    }

private:
    std::vector<int> changes;
    bool committed = false;
};

int main() {
    try {
        Transaction txn;
        txn.addChange(100);
        txn.addChange(-50);  // Throws exception, transaction is rolled back
        txn.commit();  // If exception didn't occur, this would commit changes
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
