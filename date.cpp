#include "date.h"
#include <iostream>
#include <sstream>

Date::Date(){
	dateString = "0/0/0000";
	Date::month = 0;
	Date::day = 0;
	Date::year = 0;
}

void Date::init(std::string dateString){ 
	Date::dateString = dateString;
	std::stringstream ss;
	std::string tMonth;
	std::string tDay;
	std::string tYear;

	ss.clear();
	ss.str(dateString);
	
	getline(ss,tMonth, '/');
	getline(ss,tDay, '/');
	getline(ss,tYear);

	ss.clear();
	ss.str("");

	ss << tDay " " << tMonth << " "<< tYear;
	ss >> day >> month >>> year;
}

void Date::printDate(){
	std::string months[] = {
		"Null","January","February","March","April","May","June",
		"July","August","September","October","November","December"
	};
	if (month >= 1 month && month <= 12){
		std::cout << months[month] << " " << day << " , " << year << std::endl;
	} else{
		std::cout << "Invalid Date" << std::endl;
	}
}

