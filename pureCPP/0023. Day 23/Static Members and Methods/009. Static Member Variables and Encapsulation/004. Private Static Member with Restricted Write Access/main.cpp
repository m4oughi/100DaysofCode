#include <iostream>
using namespace std;

class Library {
private:
    static int totalBooks;  // Private static member variable

public:
    static void addBooks(int count) {
        totalBooks += count;  // Method to modify static member within the class
    }

    static int getTotalBooks() {  // Read-only access via public getter
        return totalBooks;
    }
};

// Initialize static member
int Library::totalBooks = 0;

int main() {
    Library::addBooks(100);  // Add books via method
    cout << "Total books in library: " << Library::getTotalBooks() << endl;  // Output: 100

    // Library::totalBooks = 200;  // ERROR: Can't access or modify directly
    return 0;
}
