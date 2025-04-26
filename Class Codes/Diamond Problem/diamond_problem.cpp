#include <iostream>
using namespace std;

class A{
	private:
		int id;
	public:
		A() : id(0){}
		void setID(int a) {
			id = a;
		}
		int getID(){
			return id;
		}
};

class B : virtual public A {
};
class C : virtual public A {	
};

class D : public B, public C{	
};


int main(){
	D objD;
	objD.setID(10);
	cout << objD.getID() << endl;
//	cout << D.getID();
	return 0;
}













