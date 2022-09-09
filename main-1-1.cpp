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






#include <iostream>
#include <string>
int main(){
Bike *first, *second;
first = new Bike(5, "Chair");
second = new Bike(6, "Table");
first->get_value();
first->get_product_type();
second->get_value();
second->get_product_type();
	
}
