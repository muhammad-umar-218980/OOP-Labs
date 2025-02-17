#include <iostream>
using namespace std;

class Person
{
	private:
		int identity;
	public:
		void setId (int identity);
		int getId( ) const;
};

void Person :: setId (int id)
{
	identity = id;
}

int Person :: getId () const
{
	return identity;
}

class Student : public Person
{
	private:
		double gpa;
	public:
		void setGPA (double gpa);
		double getGPA () const;		
};

void Student :: setGPA (double gp)
{
	gpa = gp;
}

double Student :: getGPA() const
{
	return gpa;
}


int main ( )
{
// Instantiation and use of a Person object
	Person person;
	person.setId (1111);
	cout << "Person Information: " << endl;
	cout << "Person’s identity: " << person.getId ( );
	cout << endl << endl;
// Instantiation and use of a Student object
	Student student;
	student.setId (2222);
	student.setGPA (3.9);
	cout << "Student Information: " << endl;
	cout << "Student’s identity: " << student.getId() << endl;
	cout << "Student’s gpa: " << student.getGPA();
	return 0;
}