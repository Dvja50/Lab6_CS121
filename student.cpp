#include "student.h"
#include  "date.h"
#include "address.h"

#include <iostream> 
#include <sstream>

Student::Student(){
	studentString = "";
	firstName = "";
	lastName = "";
	dob = new Date();
	expectedGrad = new Date();
	address = new Address();
	creditHours = 0;
}

Student::Student(std::string studentString){
	student::init(studentString);
}

Student::~Student(){
	delete dob;
	delete expectedGrad;
	delete address;
}

void Student::init(std::string studentString){
	Student::studentString = studentString;

	std::stringstream ss;
	ss.str(studentString);

	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string tDob;
	std::string tGradeDate;
	std::string tCreditHours;

	getline(ss, firstName, ',');
	getline(ss, lastName, ',');
	getline(ss, street, ',');
	getline(ss, city,',');
	getline(ss, state, ',');
	getline(ss, zip, ',');
	getline(ss, tDob, ',');
	getline(ss, tGradDate, ',');
	getline(ss, tCreditHours);

	address ->init(street,city,state,zip);
	dob->init(tDob);
	expectedGrad->init(tGradDate);

	ss.clear();
	ss.str(tCreditHours);
	ss >> creditHours;
}
void Student::printStudent(){
	std::cout << firstName << " " << lastName  << std::endl;
	address->printAddress();

	std::cout <<"DOB: ";
	dob->printDate();
	std::cout << "Grad: ";
	expectedGrad->printDate();

	std::cout << "Credits: " << creditHours << std::endl;
	std::cout << "_____________________________________";
	std::cout << std::endl;
}

std::string Student::getLastFirst(){
	std::stringstream ss;
	ss.clear();
	ss << lastName << ",  " << firstName;
	return ss.str();
}
std::string Student::getLastName(){
	return lastName;
}
std::string Student::getFirstName(){
	return firstName;
}
