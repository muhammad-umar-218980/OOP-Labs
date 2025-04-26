#include <iostream>
using namespace std;

class Person
{
	private:
		int identity;
	public:
		Person(int);
		virtual void display()=0;
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
		void func_Student();
};

Student::Student(int a, double b) : Person(a),gpa(b){ }

void Student::display(){
	Person::display();
	cout << "Student GPA is: " << gpa << endl;
}

void Student::func_Student(){
	cout << "This function is specific to student class" << endl;
}

class Faculty : public Person{
	private:
		int salary;
	public:
		Faculty(int,int);
		void display();	
		void func_Faculty();
};

Faculty::Faculty(int a, int b) : Person(a), salary(b){ }

void Faculty::display(){
	Person::display();
	cout << "Faculty Salary is: " << salary << endl;
}

void Faculty::func_Faculty(){
	cout << "This function is specific to faculty class" << endl;
}

int main ( )
{
	Person* p;
	p = new Student(1,3.4);
	p->display();
	
	Student* s;
	s = dynamic_cast<Student*>(p);
	if(s){
		s->func_Student();
	}
	return 0;
}