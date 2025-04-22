#include <iostream>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028
 
*/

// ----------------------------- Vehicle (Base Class) -----------------------------

class Vehicle {
protected:
    string type, make, model, color;
    int year;
    double milesDriven;

public:
    Vehicle(string type, string make, string model, string color, int year, double milesDriven) {
        this->type = type;
        this->make = make;
        this->model = model;
        this->color = color;
        this->year = year;
        this->milesDriven = milesDriven;
    }

    void display() {
        cout << "Type: " << type << "\n\n";
        cout << "Make: " << make << "\n\n";
        cout << "Model: " << model << "\n\n";
        cout << "Color: " << color << "\n\n";
        cout << "Year: " << year << "\n\n";
        cout << "Miles Driven: " << milesDriven << "\n\n";
    }
};


// ----------------------------- ElectricVehicle (Derived from Vehicle) -----------------------------

class ElectricVehicle : virtual public Vehicle {
protected:
    double energyStorage;

public:
    ElectricVehicle(string type, string make, string model, string color, int year, double milesDriven, double energyStorage) : 
    Vehicle(type, make, model, color, year, milesDriven) {
        this->energyStorage = energyStorage;
    }

    void display() {
        cout << "Energy Storage: " << energyStorage << " kWh" << "\n\n";
    }
};


// ----------------------------- GasVehicle (Derived from Vehicle) -----------------------------

class GasVehicle : virtual public Vehicle {
protected:
    double fuelTankSize;

public:
    GasVehicle(string type, string make, string model, string color, int year, double milesDriven, double fuelTankSize) : 
    Vehicle(type, make, model, color, year, milesDriven) {
        this->fuelTankSize = fuelTankSize;
    }

    void display() {
        cout << "Fuel Tank Size: " << fuelTankSize << " liters" << "\n\n";
    }
};


// ----------------------------- HighPerformance (Derived from GasVehicle only) -----------------------------
class HighPerformance : public GasVehicle {
private:
    int horsePower;
    double topSpeed;
};

// ----------------------------- SportsCar (Derived from HighPerformance) -----------------------------
class SportsCar : public HighPerformance {
public:
    string gearbox, driveSystem;
};






// ----------------------------- HeavyVehicle (Derived from GasVehicle & ElectricVehicle) -----------------------------

class HeavyVehicle : public GasVehicle, public ElectricVehicle {
protected:
    double maxWeight, length;
    int numWheels;

public:
    HeavyVehicle(string type, string make, string model, string color, int year, double milesDriven, double fuelTankSize, double energyStorage, double maxWeight, int numWheels, double length)
        : Vehicle(type, make, model, color, year, milesDriven),
          GasVehicle(type, make, model, color, year, milesDriven, fuelTankSize),
          ElectricVehicle(type, make, model, color, year, milesDriven, energyStorage) {
        this->maxWeight = maxWeight;
        this->numWheels = numWheels;
        this->length = length;
    }

    void display()   {
        Vehicle::display();  
        GasVehicle::display();  
        ElectricVehicle::display();  
        cout << "Max Weight: " << maxWeight << " tons" << "\n\n";
        cout << "Number of Wheels: " << numWheels << "\n\n";
        cout << "Length: " << length << " meters" << "\n\n";
    }
};

// ----------------------------- ConstructionTruck (Derived from HeavyVehicle) -----------------------------
class ConstructionTruck : public HeavyVehicle {
public:
    string cargo;
};

// ----------------------------- Bus (Derived from HeavyVehicle) -----------------------------

class Bus : public HeavyVehicle {
private:
    int numberOfSeats;

public:
    Bus(string type, string make, string model, string color, int year, double milesDriven, double fuelTankSize, double energyStorage, double maxWeight, int numWheels, double length, int numberOfSeats)
        : Vehicle(type, make, model, color, year, milesDriven),
          HeavyVehicle(type, make, model, color, year, milesDriven, fuelTankSize, energyStorage, maxWeight, numWheels, length) {
        this->numberOfSeats = numberOfSeats;
    }

    void display()  {
        cout << "----- Bus Info -----" << "\n\n";
        HeavyVehicle::display();  
        cout << "Number of Seats: " << numberOfSeats << "\n\n";
    }
};


// ----------------------------- MAIN FUNCTION -----------------------------

int main() {
    Bus B1("Bus", "Mercedes", "Sprinter", "White", 2022, 15000,
              120, 85, 8.5, 6, 9.2, 40);

    B1.display();

    return 0;
}
