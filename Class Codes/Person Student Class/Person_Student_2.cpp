#include <iostream>
using namespace std;

class Person
{
	private:
		int identity;
	public:
		void setId (int identity);
		int getId( ) const;
		void display();
};

void Person :: setId (int id)
{
	identity = id;
}

int Person :: getId () const
{
	return identity;
}

void Person::display(){
	cout << "The Person ID is: " << identity << endl;
}

class Student : public Person
{
	private:
		double gpa;
	public:
		void setGPA (double gpa);
		double getGPA () const;	
		void display();	
};

void Student :: setGPA (double gp)
{
	gpa = gp;
}

double Student :: getGPA() const
{
	return gpa;
}

void Student::display(){
	cout << "Student GPA is: " << gpa << endl;
}

int main ( )
{
// Instantiation and use of a Person object
	Person person;
	person.setId (1111);
	person.display();
	cout << endl << endl;
// Instantiation and use of a Student object
	Student student;
	student.setId (2222);
	student.setGPA (3.9);
	student.display();
	return 0;
}