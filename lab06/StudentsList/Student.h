#pragma once
#include <iostream>
using namespace std;

class StudentsList;

class Student{
    public:
        static int studentId;
        Student();
        Student(const char* name, const char* surname);
        void Print();
        void setParentList(StudentsLis* studentsList);
        char* getName(); 
        char* getSurname();
        int getId();
        StudentsList* ParentList();
    private:
        StudentsList* parentList_; 
        char* name_;
        char* surname_;
        int id_ = 0;
};
