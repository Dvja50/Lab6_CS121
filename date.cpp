#include "date.h"
#include <iostream>

Date::Date(){
	Date::month = 0;
	Date::day = 0;
	Date::year = 0;
}

void Date::init(std::string date){
}

void Date::printDate(){
	std::cout << " " << Date::date << std::endl;
}

