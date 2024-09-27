#pragma pack(push, 1)

struct PackedStruct {
    char a;
    int b;
};

#pragma pack(pop)

int main() {
    return sizeof(PackedStruct); // Size is 5 bytes due to 1-byte alignment
}
