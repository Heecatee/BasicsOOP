#pragma once
#include <iostream>
#include <string>

class Student{
    public:
        Student();
        Student(std::string name, std::string surname);
        std::string getName(){ return name_; };
        std::string getSurname(){ return surname_; };
        void Print();
    private:
        static int studentId;
        std::string name_;
        std::string surname_;
        int id_ = 0;
};