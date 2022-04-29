#include <iostream>

#include "Car.h"
#include "CountryHouse.h"
#include "Apartment.h"
#include "Property.h"

int main() {
    Property* array[7];
    Apartment *ap1 = new Apartment(10);
    Apartment *ap2 = new Apartment(10);
    Apartment *ap3 = new Apartment(10);
    Car *car1 = new Car(10);
    Car *car2 = new Car(10);
    CountryHouse *ch1 = new CountryHouse(10);
    CountryHouse *ch2 = new CountryHouse(10);
    array[0] = ap1;
    array[1] = ap2;
    array[2] = ap3;
    array[3] = car1;
    array[4] = car2;
    array[5] = ch1;
    array[6] = ch2;
    std::cout << array[0]->worth << std::endl;
    float fine = array[0]->calculate_fine();
    std::cout << "fine is " << fine;
    delete ap1;
    delete ap2;
    delete ap3;
    delete car1;
    delete car2;
    delete ch1;
    delete ch2;
    return 0;
}
