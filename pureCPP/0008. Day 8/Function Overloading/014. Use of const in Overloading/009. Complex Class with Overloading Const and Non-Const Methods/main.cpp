#include <iostream>
#include <string>
using namespace std;

class Document {
    string content;
public:
    Document(const string& text) : content(text) {}

    // Non-const method to modify content
    string& getContent() {
        cout << "Non-const getContent called" << endl;
        return content;
    }

    // Const method to read content
    const string& getContent() const {
        cout << "Const getContent called" << endl;
        return content;
    }
};

int main() {
    Document doc("Editable content");
    const Document constDoc("Read-only content");

    // Modifiable access
    doc.getContent() = "Updated content";

    // Read-only access
    cout << constDoc.getContent() << endl;

    return 0;
}
