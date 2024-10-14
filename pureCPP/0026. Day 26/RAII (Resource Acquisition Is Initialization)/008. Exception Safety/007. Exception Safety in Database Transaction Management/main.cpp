#include <iostream>
#include <stdexcept>

class DatabaseTransactionRAII {
    bool active;

public:
    DatabaseTransactionRAII() : active(true) {
        std::cout << "Transaction started." << std::endl;
    }

    ~DatabaseTransactionRAII() {
        if (active) {
            std::cout << "Transaction rolled back." << std::endl;
        } else {
            std::cout << "Transaction committed." << std::endl;
        }
    }

    void commit() {
        active = false;
    }

    void simulateException() {
        throw std::runtime_error("Simulated exception during transaction.");
    }
};

int main() {
    try {
        DatabaseTransactionRAII transaction;
        // Perform some operations...
        transaction.simulateException();  // Exception occurs here.
        transaction.commit();  // This won't be reached due to the exception.
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Transaction is rolled back automatically after exception.
}
