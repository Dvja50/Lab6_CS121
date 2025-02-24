#include "address.h"
#include <iostream>


Address::Address(){
	Address::street = "";
	Address:: city = "";
	Address::zip = "";
	Address::state = "";

}
void Address::init(std::string street, std::string city, std::string zip, std::string state){
	Address::street = street;
	Address::city = city;
	Address::zip = zip;
	Address::state = state;
}

void Address::printAddress(){
	std::cout << Address::street<<std::endl;
	std::cout <<Address::city<<" "<<Address::state << " , "<<Address::zip << std::endl;
}
