#include <iostream>
#include <string>
using namespace std;

/*

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

//----------------------------- PARENT CLASS -----------------------------

class Item {
protected:
    string name;
    int quantity;

public:
    Item(string value) { 
        name = value; 
        quantity = 0; 
    }

    void set_name(string value);
    string get_name() const;

    void set_quantity(int value);
    int get_quantity() const;
};

void Item::set_name(string value) {
    name = value;
}

string Item::get_name() const {
    return name;
}

void Item::set_quantity(int value) {
    quantity = value;
}

int Item::get_quantity() const {
    return quantity;
}

//----------------------------- BAKED GOODS -----------------------------

class BakedGoods : public Item {
protected:
    float discount;

public:
    BakedGoods(string value) : Item(value) { 
        discount = 0.10; 
    }

    float calculate_price(int value) const;
};

using BG = BakedGoods; 

float BG::calculate_price(int value) const {
    float total = value - (value * discount);
    return total;
}

//----------------------------- CAKES -----------------------------

class Cakes : public BG {
private:
    int price;

public:
    Cakes() : BG("Cake") { 
        price = 600; 
    }

    float calculate_bill() const;
};

float Cakes::calculate_bill() const {
    float total = calculate_price(price);
    return total * get_quantity();
}

//----------------------------- BREAD -----------------------------

class Bread : public BG {
private:
    int price;

public:
    Bread() : BG("Bread") { 
        price = 200; 
    }

    float calculate_bill() const;
};

float Bread::calculate_bill() const {
    float total = calculate_price(price);
    return total * get_quantity();
}

//----------------------------- DRINKS -----------------------------

class Drinks : public Item {
protected:
    float discount;
    int price;

public:
    Drinks() : Item("Drink") { 
        discount = 0.05; 
        price = 100; 
    }

    float calculate_bill() const;
};

float Drinks::calculate_bill() const {
    float total = price - (price * discount);
    return total * get_quantity();
}

void menu();

//----------------------------- MAIN FUNCTION -----------------------------

int main() {
    Cakes cake;
    Bread bread;
    Drinks drink;

    string value;
    int quantity;

    menu(); 

    cout << "Enter Cake name: ";
    cin >> value;
    cake.set_name(value);
    cout << "Enter quantity of cakes: ";
    cin >> quantity;
    cake.set_quantity(quantity);

    cout << "\nEnter Bread name: ";
    cin >> value;
    bread.set_name(value);
    cout << "Enter quantity of bread: ";
    cin >> quantity;
    bread.set_quantity(quantity);

    cout << "\nEnter Drink name: ";
    cin >> value;
    drink.set_name(value);
    cout << "Enter quantity of drinks: ";
    cin >> quantity;
    drink.set_quantity(quantity);

    float total = cake.calculate_bill() + bread.calculate_bill() + drink.calculate_bill();

    cout << "\nTotal bill: " << total << endl;

    return 0;
}

//----------------------------- MENU FUNCTION -----------------------------

void menu() {
    cout << "\n\t\t------ Bakery Menu ------" << endl;
    cout << "\t\t1. Cake - Price: 600, Discount: 10%" << endl;
    cout << "\t\t2. Bread - Price: 200, Discount: 10%" << endl;
    cout << "\t\t3. Drink - Price: 100, Discount: 5%" << endl;
    cout << "\t\t------------------------\n\n" << endl;
}
