export module geometry;
namespace geometry {
    export double area(double radius) {
        return 3.14159 * radius * radius;
    }
    
    export double perimeter(double radius) {
        return 2 * 3.14159 * radius;
    }
}
