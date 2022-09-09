
#include <iostream>
#include <string>

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







Bike::Bike(){
	valueA = 0;
	productA = "";	
}

Bike::Bike(int value, std::string product_type){
	valueA=value;
	productA = product_type;
}

std::string Bike::get_product_type(){
//std::cout << productA << std::endl;
return productA;
}	

int Bike::get_value(){
	//std::cout << valueA << std::endl;
	return valueA;
}

Bike::~Bike(){
}
