//Basic Counter Class
//Unary increment Operator in prefix notation overloaded
//Operator returning object
//Unary increment operator in postfix notation overloaded

#include <iostream>
using namespace std;

class Counter{
	private:
		int count;
	public:
		Counter();
		Counter(int);
		void inc_count();
		int getCount() const;
		
		Counter operator ++();
		Counter operator ++(int);
};

Counter::Counter() : count(0) { }

Counter::Counter(int a) : count(a) { }

void Counter::inc_count(){
	count = count + 1;
}

int Counter::getCount() const{
	return count;
}


Counter Counter::operator ++() {
	Counter temp;
	++count;
	temp.count = count;
	return temp;
}

Counter Counter::operator ++(int){
	Counter temp;
	temp.count = count;
	count++;
	return temp;
}
int main(){
	Counter c1, c2;
	cout << "Value of counter before increment: " << c1.getCount() << endl;
	
	++c1;
	++c1;
	c2 = ++c1;
	cout << "Value of counter 1 after increment: " << c1.getCount() << endl;
	cout << "Value of counter 2 after assignment: " << c2.getCount() << endl << endl;
	
	c2 = c1++;
	cout << "Value of counter 1 after increment: " << c1.getCount() << endl;
	cout << "Value of counter 2 after assignment: " << c2.getCount() << endl;
}