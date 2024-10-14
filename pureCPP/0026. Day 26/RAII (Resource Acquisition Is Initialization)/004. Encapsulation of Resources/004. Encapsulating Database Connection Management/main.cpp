#include <iostream>

class DatabaseConnectionRAII {
    bool connected;

public:
    DatabaseConnectionRAII() {
        // Simulate database connection
        connected = true;
        std::cout << "Database connection established." << std::endl;
    }

    ~DatabaseConnectionRAII() {
        if (connected) {
            std::cout << "Database connection closed." << std::endl;
        }
    }

    void executeQuery(const std::string& query) {
        if (connected) {
            std::cout << "Executing query: " << query << std::endl;
        }
    }
};

int main() {
    {
        DatabaseConnectionRAII db;
        db.executeQuery("SELECT * FROM users");
    }  // Connection is closed automatically when `db` goes out of scope.
}
