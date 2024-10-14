#include <iostream>

class DatabaseTransactionRAII {
    bool transactionActive;

public:
    DatabaseTransactionRAII() {
        transactionActive = true;
        std::cout << "Database transaction started." << std::endl;
    }

    ~DatabaseTransactionRAII() {
        if (transactionActive) {
            std::cout << "Database transaction rolled back." << std::endl;
        }
    }

    void commit() {
        if (transactionActive) {
            transactionActive = false;
            std::cout << "Database transaction committed." << std::endl;
        }
    }
};

int main() {
    {
        DatabaseTransactionRAII transaction;
        // Perform some database operations
        // transaction.commit();  // Uncomment this to commit the transaction
    }  // Transaction is rolled back if not committed when going out of scope.
}
