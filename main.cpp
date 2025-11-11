#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

public :

Person(string name , int id)
{
    this->name = name;
    this->id = id;
};

Course( string courseCode , string courseName , int maxStudents , Student* students ,int currentStudents )
{
    this->courseCode = courseCode;
    this->courseName = courseName;
    this->maxStudents = maxStudents;
    this->students = students;
    this->currentStudents = currentStudents;
};

student(int yearLevel , string major )
{
    this->yearLevel = yearLevel;
    this->major = major;
};

Instructor(string department , int experienceYears; )
{
    this->department = department;
    this->experienceYears = experienceYears;
}


string Person :: display()
{
    cout << "Name :" << " " << name << endl;
    cout << "ID :" << " " << id << endl;
};

string Instructor :: display()
{
    cout << "Department : " << " " << department << endl;
    cout << "Experiance Years :" << " " << experienceYears << endl;
};

Course :: void addStudent(const Student& s)
{
  return currentStudents + s;  
};

string Course :: displayCourseInfo()
{
    cout << "Course Code :" << " " << courseCode << endl;
    cout << "Course Name : " << " " << courseName << endl;
    cout << "Max Students : " << " " << maxStudents << endl;
    cout << "Student : " << " " << students << endl;
    cout << "Current Students :" << " " << currentStudents << endl;
};
int main() {
   
    
    return 0;
}
