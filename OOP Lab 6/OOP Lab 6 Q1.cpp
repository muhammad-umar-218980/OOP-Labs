#include <iostream>

using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

//----------------------------- SHAPE CLASS -----------------------------

class Shape {
protected:
    int no_of_sides;
    double area;

public:
    Shape();
    Shape(int value);

    double get_area();
    
    int get_no_of_sides();
    void set_no_of_sides(int value);
};

Shape::Shape() {
    no_of_sides = 1;
    area = 0.0;
}

Shape::Shape(int value) {
    no_of_sides = value;
    area = 0.0;
}

double Shape::get_area() {
    return area;
}

int Shape::get_no_of_sides() {
    return no_of_sides;
}

void Shape::set_no_of_sides(int value) {
    no_of_sides = value;
}

//----------------------------- RECTANGLE CLASS -----------------------------

class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    Rectangle();
    Rectangle(double value1, double value2);

    void generate_area();
};

Rectangle::Rectangle() : Shape(4) {
    length = 1.0;
    width = 1.0;
}

Rectangle::Rectangle(double value1, double value2) : Shape(4) {
    length = value1;
    width = value2;
}

void Rectangle::generate_area() {
    area = length * width;
}

//----------------------------- CIRCLE CLASS -----------------------------

class Circle : public Shape {
private:
    double radius;

public:
    Circle();
    Circle(double value);

    void generate_area();
};

Circle::Circle() {
    radius = 1.0;
}

Circle::Circle(double value) {
    radius = value;
}

void Circle::generate_area() {
    area = 3.142 * radius * radius;
}

//----------------------------- TRIANGLE CLASS -----------------------------

class Triangle : public Shape {
private:
    double height;
    double base;

public:
    Triangle();
    Triangle(double value1, double value2);

    void generate_area();
};

Triangle::Triangle() : Shape(3) {
    height = 1.0;
    base = 1.0;
}

Triangle::Triangle(double value1, double value2) : Shape(3) {
    height = value1;
    base = value2;
}

void Triangle::generate_area() {
    area = (height * base) / 2.0;
}

//----------------------------- SQUARE CLASS -----------------------------

class Square : public Rectangle {
public:
    Square();
    Square(double value);
    bool check_sides();
    void generate_area();
};

Square::Square() : Rectangle(1.0, 1.0) {  
}

Square::Square(double value) : Rectangle(value, value) {
}

bool Square::check_sides() {
    if (length == width) {
        return true;
    }
    return false;
}

void Square::generate_area() {
    area = length * length;
}

//----------------------------- MAIN FUNCTION -----------------------------

int main() {
	
    Rectangle r1;
    r1.generate_area();
    cout << "Area of Rectangle 1: " << r1.get_area() << endl;
    
    Rectangle r2(5.0, 4.0);
    r2.generate_area();
    cout << "Area of Rectangle 2: " << r2.get_area() << endl << endl;
    


    Circle c1;
    c1.generate_area();
    cout << "Area of Circle 1: " << c1.get_area() << endl;

    Circle c2(3.0);
    c2.generate_area();
    cout << "Area of Circle 2: " << c2.get_area() << endl << endl;



    Triangle t1;
    t1.generate_area();
    cout << "Area of Triangle 1: " << t1.get_area() << endl;

    Triangle t2(6.0, 3.0);
    t2.generate_area();
    cout << "Area of Triangle 2: " << t2.get_area() << endl << endl;



    Square s1;
    s1.generate_area();
    cout << "Area of Square 1: " << s1.get_area() << endl;

    if (s1.check_sides()) {
        cout << "Square 1 sides are equal." << endl << endl;
    } else {
        cout << "Square 1 sides are not equal." << endl << endl;
    }

    Square s2(4.0);
    s2.generate_area();
    cout << "Area of Square 2: " << s2.get_area() << endl;

    if (s2.check_sides()) {
        cout << "Square 2 sides are equal." << endl;
    } else {
        cout << "Square 2 sides are not equal." << endl;
    }

    return 0;
}
