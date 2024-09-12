#include <iostream>

struct Base {
public:
    int publicVar;

protected:
    int protectedVar;

private:
    int privateVar;

public:
    Base(int pub, int prot, int priv) : publicVar(pub), protectedVar(prot), privateVar(priv) {}
};

struct Derived : private Base {
public:
    Derived(int pub, int prot, int priv) : Base(pub, prot, priv) {}

    int getPublicVar() const {
        return publicVar; // Accessible as private in Derived
    }

    int getProtectedVar() const {
        return protectedVar; // Accessible as private in Derived
    }

    // privateVar is not accessible here, as it is private in Base.
};

int main() {


    return 0;
}