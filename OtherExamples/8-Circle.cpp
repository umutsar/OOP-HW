#include <iostream>

using namespace std;

class Circle {
private:
    double radius;
    double pi = 3.14159;

public:
    Circle() {
        radius = 0;
    }

    Circle(double _radius) {
        radius = _radius;
    }

    void setRadius(double _radius) {
        radius = _radius;
    }

    //const functions
    double getRadius() const {
        return radius;
    }

    double getArea() const {
        return pi * radius * radius;
    }

    double getDiameter() const {
        return radius * 2;
    }

    double getCircumference() const {
        return 2 * pi * radius; // 
    }
};
int main() {
    double radius;
    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius);

    cout << "Area of the circle: " << circle.getArea() << endl;
    cout << "Diameter of the circle: " << circle.getDiameter() << endl;
    cout << "Circumference of the circle: " << circle.getCircumference() << endl;

    return 0;
}
