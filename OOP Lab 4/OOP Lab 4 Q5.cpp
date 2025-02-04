#include <iostream>
#include <string>
using namespace std;

/*

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

class Hotel_Mercato {
private:
    string customer_name;
    int days;
    static const double rent_per_day;

public:
    void set_Customer_Name(string value);
    string get_Customer_Name();

    void set_Days(int value);
    int get_Days();

    double calculate_Rent() const;  

    void display_Details() const;
};

const double Hotel_Mercato::rent_per_day = 1000.85;

void Hotel_Mercato::set_Customer_Name(string value) {
    customer_name = value;
}

string Hotel_Mercato::get_Customer_Name() {
    return customer_name;
}

void Hotel_Mercato::set_Days(int value) {
    days = value;
}

int Hotel_Mercato::get_Days() {
    return days;
}

double Hotel_Mercato::calculate_Rent() const {  
    double total_rent = days * rent_per_day;

    if (days > 7) {
        total_rent = (days - 1) * rent_per_day;
    }

    return total_rent;
}

void Hotel_Mercato::display_Details() const {
    cout << "\tCustomer Name: " << customer_name << endl;
    cout << "\tDays Stayed: " << days << endl;
    cout << "\tTotal Rent: " << calculate_Rent() << endl;  
    cout << endl;
    for (int i = 0; i < 60; i++) {
        cout << "-";
    }
    cout << endl;
}

using HM = Hotel_Mercato;

int main() {
    HM customer1, customer2, customer3, customer4, customer5;

    customer1.set_Customer_Name("Umar");
    customer1.set_Days(5);

    customer2.set_Customer_Name("Ahmed");
    customer2.set_Days(10);

    customer3.set_Customer_Name("Ayaan");
    customer3.set_Days(8);

    customer4.set_Customer_Name("Ibtissam");
    customer4.set_Days(12);

    customer5.set_Customer_Name("Rafay");
    customer5.set_Days(6);

    cout << "\tHOTEL MERCATO - CUSTOMER RENT DETAILS" << endl << endl;
    customer1.display_Details();
    customer2.display_Details();
    customer3.display_Details();
    customer4.display_Details();
    customer5.display_Details();

    return 0;
}
