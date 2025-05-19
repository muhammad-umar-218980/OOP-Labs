//Exception Handling 

#include <iostream>
using namespace std;
const int MAX = 3;

class Range{
	
};

class Stack
{
private:
	int st[MAX]; //stack: array of integers
	int top; //number of top of stack
public:
	Stack() //constructor
	{ 
		top = -1; 
	}
	void push(int var) //put number on stack
	{
		if (top>=MAX-1)
			throw Range(); 
		st[++top] = var; 
	}
	int pop() //take number off stack
	{
		if (top < 0)
			throw Range(); 
		return st[top--]; 
	}
};

int main()
{
	Stack s1;
	try{	
		s1.push(11);
		s1.push(22);
		s1.push(33);
//		s1.push(44);
//		s1.push(55);
//		s1.push(66);
		cout << "1: " << s1.pop() << endl; //22
		cout << "2: " << s1.pop() << endl; //11	
		cout << "3: " << s1.pop() << endl; //66
		cout << "4: " << s1.pop() << endl; //55
		cout << "5: " << s1.pop() << endl; //44
		cout << "6: " << s1.pop() << endl; //33
	}
	catch(Range){
		cout << "Stack full or empty" << endl;
	}
	
	cout << "End of program" << endl;
	return 0;
}