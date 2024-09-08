#include <iostream>
#include <vector>
#include <string>

class File {
public:
    File(const std::string& filename) : name(filename) {
        std::cout << "Opening file: " << name << "\n";
    }
    ~File() {
        std::cout << "Closing file: " << name << "\n";
    }
private:
    std::string name;
};

int main() {
    std::vector<File> files;
    
    files.emplace_back("file1.txt");
    files.emplace_back("file2.txt");
    files.emplace_back("file3.txt");

    // Vector ensures files are closed when no longer needed

    return 0;
}
