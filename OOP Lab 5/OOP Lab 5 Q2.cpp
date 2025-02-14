#include <iostream>
#include <string>

using namespace std;

/*

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

//----------------------------- PARENT CLASS -----------------------------
class Teacher {
private:
    string name;
    int age;
    string institute;

public:
    Teacher(string n, int a, string i);

    void set_name(string n);
    string get_name();

    void set_age(int a);
    int get_age();

    void set_institute(string i);
    string get_institute();

    void display_info();
};

using T = Teacher;

T::Teacher(string n, int a, string i) {
    name = n;
    age = a;
    institute = i;
}

void T::set_name(string n) { 
    name = n; 
}

string T::get_name() { 
    return name; 
}

void T::set_age(int a) { 
    age = a; 
}

int T::get_age() { 
    return age; 
}

void T::set_institute(string i) { 
    institute = i; 
}

string T::get_institute() { 
    return institute; 
}

void T::display_info() { 
    cout << "Name: " << name << "\nAge: " << age << "\nInstitute: " << institute << endl; 
}

//----------------------------- HUMANITIES TEACHER -----------------------------

class HumanitiesTeacher : public Teacher {
private:
    string dept;
    string course;
    string designation;

public:
    HumanitiesTeacher(string n, int a, string i, string c, string d);

    string get_dept();

    void set_course(string c);
    string get_course();

    void set_designation(string d);
    string get_designation();

    void display();
};

using HT = HumanitiesTeacher;

HT::HumanitiesTeacher(string n, int a, string i, string c, string d) 
    : T(n, a, i) {
    dept = "Humanities";
    course = c;
    designation = d;
}

string HT::get_dept() { 
    return dept; 
}

void HT::set_course(string c) { 
    course = c; 
}

string HT::get_course() { 
    return course; 
}

void HT::set_designation(string d) { 
    designation = d; 
}

string HT::get_designation() { 
    return designation; 
}

void HT::display() { 
    display_info();
    cout << "Department: " << dept << "\nCourse: " << course << "\nDesignation: " << designation << endl; 
}

//----------------------------- SCIENCE TEACHER -----------------------------
class ScienceTeacher : public Teacher {
private:
    string dept;
    string course;
    string designation;

public:
    ScienceTeacher(string n, int a, string i, string c, string d);

    string get_dept();

    void set_course(string c);
    string get_course();

    void set_designation(string d);
    string get_designation();

    void display();
};

using ST = ScienceTeacher;

ST::ScienceTeacher(string n, int a, string i, string c, string d) 
    : T(n, a, i) {
    dept = "Science";
    course = c;
    designation = d;
}

string ST::get_dept() { 
    return dept; 
}

void ST::set_course(string c) { 
    course = c; 
}

string ST::get_course() { 
    return course; 
}

void ST::set_designation(string d) { 
    designation = d; 
}

string ST::get_designation() { 
    return designation; 
}

void ST::display() { 
    display_info();
    cout << "Department: " << dept << "\nCourse: " << course << "\nDesignation: " << designation << endl; 
}

//----------------------------- MATHS TEACHER -----------------------------
class MathsTeacher : public Teacher {
private:
    string dept;
    string course;
    string designation;

public:
    MathsTeacher(string n, int a, string i, string c, string d);

    string get_dept();

    void set_course(string c);
    string get_course();

    void set_designation(string d);
    string get_designation();

    void display();
};

using MT = MathsTeacher;

MT::MathsTeacher(string n, int a, string i, string c, string d) 
    : T(n, a, i) {
    dept = "Maths";
    course = c;
    designation = d;
}

string MT::get_dept() { 
    return dept; 
}

void MT::set_course(string c) { 
    course = c; 
}

string MT::get_course() { 
    return course; 
}

void MT::set_designation(string d) { 
    designation = d; 
}

string MT::get_designation() { 
    return designation; 
}

void MT::display() { 
    display_info();
    cout << "Department: " << dept << "\nCourse: " << course << "\nDesignation: " << designation << endl; 
}

//----------------------------- MAIN FUNCTION -----------------------------
int main() {
    string name, institute, course, designation;
    int age;

    cout << "Enter details for Humanities Teacher:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cin.ignore();
    cout << "Institute: ";
    getline(cin, institute);
    cout << "Course: ";
    getline(cin, course);
    cout << "Designation: ";
    getline(cin, designation);

    HT ht(name, age, institute, course, designation);

    cout << "\nEnter details for Science Teacher:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cin.ignore();
    cout << "Institute: ";
    getline(cin, institute);
    cout << "Course: ";
    getline(cin, course);
    cout << "Designation: ";
    getline(cin, designation);

    ST st(name, age, institute, course, designation);

    cout << "\nEnter details for Maths Teacher:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cin.ignore();
    cout << "Institute: ";
    getline(cin, institute);
    cout << "Course: ";
    getline(cin, course);
    cout << "Designation: ";
    getline(cin, designation);

    MT mt(name, age, institute, course, designation);
    
    cout << endl;
    for(int i = 1 ; i <= 120 ; i++){
    	cout <<"-";
	}

    cout << "\nHumanities Teacher:\n";
    ht.display();
    
    cout << endl;
    for(int i = 1 ; i <= 120 ; i++){
    	cout <<"-";
	}
	
    cout << "\nScience Teacher:\n";
    st.display();
    
    cout << endl;
    for(int i = 1 ; i <= 120 ; i++){
    	cout <<"-";
	}
	
    cout << "\nMaths Teacher:\n";
    mt.display();

    return 0;
}
