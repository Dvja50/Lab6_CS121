#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <alorgithm>

#include "date.h"
#include "address.h"
#include "student.h"

void testAddress();
void testDate();
void testStudent();

int main(){
/*
  std::cout << "Hello!" << std::endl;
  testAddress();
  testDate();
  testStudent();
  return 0;
} // end main
*/
std::vector<Student*> students;

loadStudents(students);
bool keepGoing = true;
while (keepGoing){
	std::string userChoice = menu();
	if (userChoice == "0"){
		keepGoing = false;
		} else if (userChoice == "1"){
			showStudentNames(students);
		} else if (userChoice == "2"){
			printStudents(students);
		} else if (userChoice == "3"){
			findStudent(students);
		} else if (userChoice == "4"){
			sortStudents(students);
		}else {
			std::cout << "Invalid Input" << std::endl;
		}
}
delStudents(students);
return 0;
}

std::string menu(){
	std::string response = "";
	std::cout << "0) quit" << std::endl;
	std::cout << "1) print all student names" << std::endl;
	std::cout << "2) print all student data" << std::endl;
	std::cout << "3) find a student" << std::endl;
	std::cout std::endl;
	std::cout << "please choose 0-3: ";
	getline(std::cin,response);
	return response;
}
void loadStudents(std::vector<Student*>& students){
	std::ifstream inFile;
	std::string currentLine;






/*void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress
void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate
void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent
*/
