#include <iostream>

class Document {
public:
    enum class Status { Draft, Final, Archived };

    void setStatus(Status s) {
        status = s;
    }

    bool isArchived() const {
        return status == Status::Archived;
    }

private:
    Status status;
};

int main() {
    Document doc;
    doc.setStatus(Document::Status::Archived);
    std::cout << "Is archived? " << std::boolalpha << doc.isArchived() << "\n";
}
