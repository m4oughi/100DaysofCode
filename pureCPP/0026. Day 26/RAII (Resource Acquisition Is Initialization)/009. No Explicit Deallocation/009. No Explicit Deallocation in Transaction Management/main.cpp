#include <iostream>

class TransactionRAII {
    bool committed;

public:
    TransactionRAII() : committed(false) {
        std::cout << "Transaction started." << std::endl;
    }

    ~TransactionRAII() {
        if (!committed) {
            std::cout << "Transaction rolled back automatically." << std::endl;
        }
    }

    void commit() {
        committed = true;
        std::cout << "Transaction committed." << std::endl;
    }

    void executeOperation(const std::string& operation) {
        std::cout << "Executing: " << operation << std::endl;
    }
};

int main() {
    {
        TransactionRAII transaction;
        transaction.executeOperation("Insert data into table");
        // No need to explicitly rollback if an error occurs.
        transaction.commit();
    }  // Transaction is automatically committed or rolled back.
}
