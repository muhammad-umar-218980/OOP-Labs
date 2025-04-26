//Inheritance with 2 derived classes. Display Method overridden
//Using single array of base class pointers to instantiate derived class objects
//Issue: Derived class methods can not be called due to the pointer type (base class)


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
	Person* arr_person[10];
	int p_count=0;
	
	arr_person[p_count] = new Faculty(1,1000); p_count++;
	arr_person[p_count] = new Faculty(2,2000); p_count++;
	
	arr_person[p_count] = new Student(3, 3.4); p_count++;
	
	for(int i=0;i<p_count;i++){
		arr_person[i]->display();
	}
	return 0;
}