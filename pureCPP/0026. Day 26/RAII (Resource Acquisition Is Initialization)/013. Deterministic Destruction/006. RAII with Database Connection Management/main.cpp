#include <iostream>

class DatabaseConnection {
public:
    DatabaseConnection() {
        std::cout << "Database connection opened." << std::endl;
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
        // Connection closed when `db` goes out of scope
    }
    std::cout << "Database connection has been closed." << std::endl;
}
