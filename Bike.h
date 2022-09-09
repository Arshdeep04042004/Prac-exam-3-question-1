#include <iostream>
#include <string>
#ifndef Bike_H
#define Bike_H

class Bike {
public:
Bike();
Bike(int value, std::string product_type);
int valueA;
std::string productA;
std::string get_product_type(); 
int get_value();
~Bike();
};
#endif