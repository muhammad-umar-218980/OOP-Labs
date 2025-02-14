#include <iostream>
using namespace std;

class Circle{
	private:
		double radius;
	public:
		Circle();
		Circle(double value);
		Circle(const Circle &crOb);
		~Circle();
		double getRadius();
		double getArea();
		double getPerimeter();
		void setRadius(double value);
};

Circle::Circle(){
	radius = 1.0;
}

Circle::Circle(double value){
	radius = value;
}

Circle::Circle(const Circle &crOb){
	radius = crOb.radius;
}

Circle::~Circle(){
	cout << "Object is deleted" << endl;
}
double Circle::getRadius(){
	return radius;
}

double Circle::getArea(){
	return 3.14 * radius * radius;
}

double Circle::getPerimeter(){
	return 2 * 3.14 * radius;
}

void Circle::setRadius(double value){
	radius = value;
}

int main(){
	//Creating first cirlce and applying member functions
	cout << "Circle One: " << endl;
	Circle c1;
	//c1.setRadius(10.0);
	cout << "Radius: " << c1.getRadius() << endl;
	cout << "Area: " << c1.getArea() << endl;
	cout << "Perimeter: " << c1.getPerimeter() << endl << endl;
	
	//Creating second circle and applying member functions
	cout << "Circle 2: " << endl;
	Circle c2(10.0);
	c2.setRadius (20.0);
	cout << "Radius: " << c2.getRadius() << endl;
	cout << "Area: " << c2.getArea() << endl;
	cout << "Perimeter: " << c2.getPerimeter() << endl << endl;
	
	Circle c3(c2);
	cout << "Circle 3: " << endl;
	cout << "Radius: " << c3.getRadius() << endl;
	cout << "Area: " << c3.getArea() << endl;
	cout << "Perimeter: " << c3.getPerimeter() << endl << endl;
	
	return 0;
	
	

}