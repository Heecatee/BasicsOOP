#pragma once
#include "Grade.h"
#include <iostream>

class GradeBook{
    public:
        GradeBook();
        void insert(const Grade* grade);
        void print() const;
        void addGrade(float grade);
        ~GradeBook():
    private:
        int size_;
        const Grade** gradeList_;
};
