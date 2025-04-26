#include <iostream>
using namespace std;


class Car{
	class Engine{
	public:
		void start(){
			cout << "Engine started " << endl;
		}
	};

	private:
		Engine engine;
	public:
		void start_car(){
			engine.start();
		}
};

int main(){
	Car my_car;
	my_car.start_car();
//	Engine x;
	
}






