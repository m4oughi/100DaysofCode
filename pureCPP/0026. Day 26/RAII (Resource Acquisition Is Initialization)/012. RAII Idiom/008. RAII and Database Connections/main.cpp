#include <iostream>

class DatabaseConnection {
public:
    DatabaseConnection() {
        std::cout << "Database connection established." << std::endl;
    }

    ~DatabaseConnection() {
        std::cout << "Database connection closed." << std::endl;
    }

    void executeQuery(const std::string& query) {
        std::cout << "Executing query: " << query << std::endl;
    }
};

int main() {
    {
        DatabaseConnection db;
        db.executeQuery("SELECT * FROM users");
    }  // Database connection is automatically closed.
    std::cout << "Database connection handled by RAII." << std::endl;
}
