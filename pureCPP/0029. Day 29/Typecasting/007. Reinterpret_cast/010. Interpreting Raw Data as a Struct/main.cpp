#include <iostream>
using namespace std;

struct Packet {
    uint16_t header;
    uint32_t data;
};

int main() {
    // A raw byte array simulating packet data
    char rawData[] = { 0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC };

    // Reinterpret the raw data as a Packet struct
    Packet* packetPtr = reinterpret_cast<Packet*>(rawData);

    cout << "Packet header: " << hex << packetPtr->header << endl;
    cout << "Packet data: " << hex << packetPtr->data << endl;

    return 0;
}
