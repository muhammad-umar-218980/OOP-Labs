#include <iostream>
using namespace std;

/*

	Muhammad Umar
	CSIT Section - A
	Roll no. : CT - 24028

*/


class TollBooth {
	
private:
    int total_cars;
    double total_cash;
    
public:
    TollBooth();
    void payingCar();
    void displayTotal();
};

TollBooth::TollBooth() {
    total_cars = 0;
    total_cash = 0.0;
}

void TollBooth::payingCar() {
    total_cars = total_cars + 1;
    total_cash = total_cash + 0.50;
}

void TollBooth::displayTotal() {
    cout << "Total number of cars: " << total_cars << endl;
    cout << "Total amount collected: " << total_cash << " $" << endl;
}

int main() {
    TollBooth toll_booth;
    int n;

    cout << "Enter the number of cars passing the toll: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        toll_booth.payingCar();
    }
    
    cout << endl ; 

    toll_booth.displayTotal();
    return 0;
}
