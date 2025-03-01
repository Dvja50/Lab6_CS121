#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address{
private:
	std::string street;
	std::string city;
	std::string zip; 
	std::string state;
public:
	Address();

	void init(std::string street, std::string city, std::string state, std::string zip);

	void printAddress();
};

#endif
