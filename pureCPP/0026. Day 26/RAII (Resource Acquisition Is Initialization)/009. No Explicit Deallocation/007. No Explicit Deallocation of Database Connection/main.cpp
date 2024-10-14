#include <iostream>

class DatabaseConnection {
    bool connected;

public:
    DatabaseConnection() : connected(true) {
        std::cout << "Database connected." << std::endl;
    }

    ~DatabaseConnection() {
        if (connected) {
            std::cout << "Database connection closed automatically." << std::endl;
        }
    }

    void executeQuery(const std::string& query) {
        std::cout << "Executing query: " << query << std::endl;
    }
};

int main() {
    {
        DatabaseConnection db;
        db.executeQuery("SELECT * FROM users");
    }  // Database connection is closed automatically.
}
