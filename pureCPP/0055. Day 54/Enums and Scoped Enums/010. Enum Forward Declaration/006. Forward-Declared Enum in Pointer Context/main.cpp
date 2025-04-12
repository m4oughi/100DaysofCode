#include <iostream>

enum class MessageType : int;

class Message {
public:
    Message(MessageType* t);
    void printType();
private:
    MessageType* type;
};

enum class MessageType : int {
    Info = 1, Error = 2
};

Message::Message(MessageType* t) : type(t) {}

void Message::printType() {
    std::cout << "Message Type = " << static_cast<int>(*type) << std::endl;
}

int main() {
    MessageType mt = MessageType::Info;
    Message msg(&mt);
    msg.printType();
}
