#include <iostream>

class ResourceBase {
public:
    ResourceBase() {
        std::cout << "Base resource acquired." << std::endl;
    }

    virtual ~ResourceBase() {
        std::cout << "Base resource released." << std::endl;
    }

    virtual void use() = 0;
};

class DerivedResource : public ResourceBase {
public:
    DerivedResource() {
        std::cout << "Derived resource acquired." << std::endl;
    }

    ~DerivedResource() override {
        std::cout << "Derived resource released." << std::endl;
    }

    void use() override {
        std::cout << "Using derived resource." << std::endl;
    }
};

int main() {
    {
        std::unique_ptr<ResourceBase> resource = std::make_unique<DerivedResource>();
        resource->use();
    }  // Both base and derived resources are released automatically.
}
