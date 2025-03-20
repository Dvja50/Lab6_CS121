#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date {
	private:
		std::string dateString;
		int month;
		int day;
		int year;
	public:
		Date();

		void init(std::string dateString);

		void printDate();
};
#endif

