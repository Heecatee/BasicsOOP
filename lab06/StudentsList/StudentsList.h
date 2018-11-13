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
	void AddStudentToList(Student* AddedStudent); //!< Funkcja dodajaca studenta do listy
	char* listName_; //!< Nazwa listy
	Student** studentsList_; //!< Lista studentow
	int counter_ = 0; //!< Licznik numerujacy studentow w liscie
};
