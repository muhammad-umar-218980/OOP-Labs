#include <iostream>
#include <string>
using namespace std;

class Address{
	private:
		string street;
		string city;
	public:
		Address(string a, string b) : street(a), city(b){}
		
};

class Person{
	private:
		string name;
		Address* my_address;
	public:
		Person(string a) : name(a), my_address(nullptr){}
		void setAddress(Address* a){
			my_address = a;
		}
};

int main(){
	Address add("university road", "karachi");
	Person p("Ahmed");
	p.setAddress(&add);
	return 0;
}










