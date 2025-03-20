#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS


#include <string>
#include "address.h"
#include "date.h"

class Student{
	protected:
		std::string studentString;
		std::string firstName;
		std::string lastName;
		Date* dob;
		Date* expectedGrad;
		Address*address;
		int creditHours;
	public:
		Student();
		Student(std::string studentString);
		~Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();
		std::string getLastName();
		std::string getFirstName();
		int getCreditHours();
};

#endif
