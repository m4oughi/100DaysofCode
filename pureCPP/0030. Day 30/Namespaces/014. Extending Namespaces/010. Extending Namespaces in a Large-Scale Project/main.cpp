#include <iostream>

// Initial Graphics namespace
namespace Graphics {
    void draw() {
        std::cout << "Drawing on the screen." << std::endl;
    }
}

// Extending the Graphics namespace with more complex functions
namespace Graphics {
    class Renderer {
    public:
        void render() {
            std::cout << "Rendering 3D objects." << std::endl;
        }
    };

    void clear() {
        std::cout << "Clearing the screen." << std::endl;
    }
}

int main() {
    Graphics::draw();             // Accessing original function
    Graphics::Renderer renderer;
    renderer.render();            // Accessing extended class Renderer
    Graphics::clear();            // Accessing newly added clear function
    return 0;
}
