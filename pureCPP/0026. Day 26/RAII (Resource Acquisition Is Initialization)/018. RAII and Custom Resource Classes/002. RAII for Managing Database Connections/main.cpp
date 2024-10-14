#include <iostream>

class DatabaseConnection {
    bool connected;
public:
    DatabaseConnection() {
        // Simulate connecting to a database
        connected = true;
        std::cout << "Database connection established." << std::endl;
    }

    ~DatabaseConnection() {
        if (connected) {
            // Simulate closing the connection
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
        DatabaseConnection db;
        db.executeQuery("SELECT * FROM users");
    }
    // Database connection will be automatically closed when db goes out of scope
    return 0;
}
