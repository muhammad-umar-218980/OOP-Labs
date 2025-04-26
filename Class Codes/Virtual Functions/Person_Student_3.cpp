//Inheritance with 2 derived classes. Display Method overridden

#include <iostream>
using namespace std;

class Person
{
	private:
		int identity;
	public:
		Person(int);
		void display();
};

Person::Person(int a) : identity(a){ }

void Person::display(){
	cout << "The ID is: " << identity << endl;
}

class Student : public Person
{
	private:
		double gpa;
	public:
		Student(int,double);
		void display();	
};

Student::Student(int a, double b) : Person(a),gpa(b){ }

void Student::display(){
	Person::display();
	cout << "Student GPA is: " << gpa << endl;
}

class Faculty : public Person{
	private:
		int salary;
	public:
		Faculty(int,int);
		void display();	
};

Faculty::Faculty(int a, int b) : Person(a), salary(b){ }

void Faculty::display(){
	Person::display();
	cout << "Faculty Salary is: " << salary << endl;
}

int main ( )
{
	Faculty f1(1,3000);
	Student s1(2,3.4);
	f1.display();
	s1.display();
	return 0;
}