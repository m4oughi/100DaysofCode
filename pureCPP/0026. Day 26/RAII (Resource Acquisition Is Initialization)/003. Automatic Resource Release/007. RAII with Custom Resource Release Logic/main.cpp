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
            std::cout << "Database connection closed automatically." << std::endl;
        }
    }

    void query(const std::string& sql) {
        if (connected) {
            std::cout << "Executing query: " << sql << std::endl;
        }
    }
};

int main() {
    {
        DatabaseConnectionRAII db;
        db.query("SELECT * FROM users");
    }  // Database connection is automatically closed when `db` goes out of scope.
}
