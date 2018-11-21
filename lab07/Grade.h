#pragma once
#include <iostream>

class Grade{
    public:
        Grade(float grade);
        void print() const;
        int getId() const {return id_;};
    private: 
        static int id_;
        float grade_;
};