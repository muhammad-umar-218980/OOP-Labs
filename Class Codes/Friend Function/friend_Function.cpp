#include <iostream>
using namespace std;

class B;

class A{
	private:
		int value;
	public:
		A(int a):value(a){
		}
		friend int testMethod(A,B);
		
};
class B{
	private:
		int value;
	public:
		B(int b) : value(b){
		}
		friend int testMethod(A,B);
};

int testMethod(A objA, B objB){
	return objA.value + objB.value;
}

int main(){
	A obj1(3);
	B obj2(4);
	cout << testMethod(obj1,obj2);
	return 0;
}









