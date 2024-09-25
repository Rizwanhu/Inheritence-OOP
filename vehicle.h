#pragma once


class Vehicle {
protected:
    string brand;
    int year;

public:

    Vehicle(){}
    Vehicle(const string& brand, int year);
    void getDetails() const;
};




class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(const string& brand, int year, int numDoors){
        this->numDoors = numDoors;
        this->brand = brand;
        this->year = year;
    }

    void getCarDetails() const {
        cout << "Car: " << brand << ", Year: " << year << ", Doors: " << numDoors << endl;
    }
    friend ostream& operator<<(ostream& cout, const Car& car) {

        cout << "Car: " << car.brand << ", Year: " << car.year << ", Number of Doors are : " << car.numDoors << endl;
        return cout;
    }
};



class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck(const string& brand, int year, int cargoCapacity){
        this->cargoCapacity = cargoCapacity;
        this->brand = brand;
        this->year = year;
    }

    void getTruckDetails() const{
        cout << "Truck: " << brand << ", Year: " << year << ", cargo-Capacity: " << cargoCapacity << endl;
    }

    friend ostream& operator<<(ostream& cout, const Truck& trc) {

        cout << "Truck: " << trc.brand << ", Year: " << trc.year << ", Cargo Capacity is : " << trc.cargoCapacity << endl;
        return cout;
    }

};



class Motorcycle : public Vehicle {
private:
    int engineCapacity;

public:
    Motorcycle(const string& brand, int year, int engineCapacity){
        this->engineCapacity = engineCapacity;
        this->brand = brand;
        this->year = year;
    }

    void getMotorcycleDetails() const{
        cout << "Motorcycle: " << brand << ", Year: " << year << ", Engine Capacity : " << engineCapacity << endl;
    }

    friend ostream& operator<<(ostream& cout,const Motorcycle& mcy){
        cout << "Motorcycle: " << mcy.brand << ", Year: " << mcy.year << ", Engine Capacity : " << mcy.engineCapacity << endl;
        return cout;
    }
};
