#define STRUCT_MEMBER(type, member) type##_##member

struct Person {
    int person_age;
    const char* person_name;
};

int main() {
    struct Person p;
    p.STRUCT_MEMBER(person, age) = 30; // Expands to: p.person_age
    p.STRUCT_MEMBER(person, name) = "John"; // Expands to: p.person_name
    return 0;
}
