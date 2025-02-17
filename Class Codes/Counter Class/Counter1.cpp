//Basic Counter Class

#include <iostream>
using namespace std;

class Counter{
	private:
		int count;
	public:
		Counter();
		void inc_count();
		int getCount() const;	
};

Counter::Counter() : count(0) { }

void Counter::inc_count(){
	count = count + 1;
}

int Counter::getCount() const{
	return count;
}

int main(){
	Counter c1;
	cout << "Value of counter before increment: " << c1.getCount() << endl;
	
	c1.inc_count();
	c1.inc_count();
	cout << "Value of counter after increment: " << c1.getCount() << endl;
	
}