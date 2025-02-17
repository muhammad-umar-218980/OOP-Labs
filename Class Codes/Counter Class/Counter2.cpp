//Basic Counter Class
//Unary increment Operator in prefix notation overloaded

#include <iostream>
using namespace std;

class Counter{
	private:
		int count;
	public:
		Counter();
		void inc_count();
		int getCount() const;
		void operator ++();	
};

Counter::Counter() : count(0) { }

void Counter::inc_count(){
	count = count + 1;
}

int Counter::getCount() const{
	return count;
}

void Counter::operator ++(){
	count = count + 1;
}

int main(){
	Counter c1;
	cout << "Value of counter before increment: " << c1.getCount() << endl;
	
	++c1;
	++c1;
	cout << "Value of counter after increment: " << c1.getCount() << endl;
	
}