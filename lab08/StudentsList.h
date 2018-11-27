#pragma once
#include <iostream>
#include <string>
#include "Student.h"

class StudentsList{
    public:
        StudentsList(std::string listName);
        StudentsList(const StudentsList& copy);
        void AddStudent(Student* student);
        void PrintInfo();
        void PrintAll();
        void Clear();
        ~StudentsList();
    private:
	 std::string listName_; 
	 Student** studentsList_; 
	 int counter_ = 0;
};