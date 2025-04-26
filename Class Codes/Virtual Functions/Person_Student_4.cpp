//Inheritance with 2 derived classes. Display Method overridden
//Using two separate arrays of pointers to instantiate derived class objects

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
	Faculty* arr_faculty[10];
	Student* arr_student[10];
	int f_count=0, s_count=0;
	
	arr_faculty[f_count] = new Faculty(1,1000); f_count++;
	arr_faculty[f_count] = new Faculty(2,2000); f_count++;
	
	arr_student[s_count] = new Student(3, 3.4); s_count++;
	
	for(int i=0;i<f_count;i++){
		arr_faculty[i]->display();
	}
	
	for(int i=0;i<s_count;i++){
		arr_student[i]->display();
	}
	return 0;
}