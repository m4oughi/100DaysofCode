#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
private:
    ofstream file;

public:
    // Constructor opens a file
    FileHandler(string fileName) {
        file.open(fileName);
        if (file.is_open()) {
            cout << "File opened successfully!" << endl;
        } else {
            cout << "Error opening file!" << endl;
        }
    }

    // Destructor closes the file
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "File closed." << endl;
        }
    }

    void writeData(string data) {
        if (file.is_open()) {
            file << data << endl;
        }
    }
};

int main() {
    FileHandler handler("example.txt");  // Constructor opens file
    handler.writeData("Hello, world!");  // Write data to file

    // Destructor will close the file when handler goes out of scope
    return 0;
}
