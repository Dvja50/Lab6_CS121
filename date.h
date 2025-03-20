#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date {
	private:
		std::string datestring
		int month;
		int day;
		int year;
	public:
		Date();

		void init(std::string dateString);

		void printdate();
};
#endif

