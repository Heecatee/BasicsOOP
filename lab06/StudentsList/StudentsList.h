#pragma once
#include <iostream>
#include "Student.h"

using namespace std;

class StudentsList{
    public:
        StudentsList();
        StudentsList(const char* listName);
        void AddStudent(Student* student);
        void AddStudent(const char* name, const char* surname);
        void PrintInfo();
        void PrintAll();
        ~StudentsList();
    private:
	 char* listName_; 
	 Student** studentsList_; 
	 int counter_ = 0;
};
